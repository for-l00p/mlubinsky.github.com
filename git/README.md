

<https://gitexplorer.com/>

<https://gitbetter.substack.com/p/how-to-use-git-fetch-and-git-pull>

https://habr.com/ru/company/manychat/blog/511946/

## GUI

<https://git-fork.com/> Fork: UI for Git

<https://www.sublimemerge.com/>  Git UI Client, from the makers of Sublime Text





https://gitbetter.substack.com/p/how-to-squash-git-commits

https://www.compscilauren.com/blog/improve-your-git-workflow-and-save-time-with-git-hooks

<https://codersbible.com/5-git-commands-to-know-just-after-you-get-the-basics/>

<https://learngitbranching.js.org/?a=b>

https://blog.jakuba.net/git-command-overview-with-useful-flags-and-aliases/

https://insights.dice.com/2020/05/04/git-mastering-basics-branch-merging/

<https://rogerdudler.github.io/git-guide/>

<https://learngitbranching.js.org/>

<http://sethrobertson.github.io/GitPostProduction/gpp.html>

<https://serokell.io/blog/comparison-of-github-and-gitlab> github vs gitlab

<https://www.infoq.com/presentations/history-comments-git/>

github from python
```
#! /usr/bin/python3
import sys
import os
import time
from github import Github

project_name = sys.argv[1]

path = '/Users/<your_github_nama>/GIT/'+project_name
print(path)
try:
    os.mkdir(path)
    print("Created Path")
except FileExistsError:
    print("Path Exists")

fileloc = path+'/README.md'
file = open(fileloc, 'w+')
file.write('Project: '+project_name+'\n')
file.close()

# You can get your GitHub access token from Github settings https://github.com/settings/tokens 
# and replace it in the script where there is XXX
g = Github("XXX")
user = g.get_user()
repo = user.create_repo(project_name)
```

<https://youtu.be/ye4LVrQ0TuM> How to work with Git Flow feature branches in the terminal

<https://habr.com/ru/post/472600/> 

<https://github.com/jesseduffield/lazygit/>

<https://www.youtube.com/watch?v=6LhTe8Mz6jM> Git flow

<https://bitbucket.org/BitPusher16/dotfiles/raw/49a01d929dcaebcca68bbb1859b4ac1aea93b073/refs/git/git_examples.sh>


Overwrite single file in my current branch with the same file in the master branch?

``git checkout master file_to_replace``


## Remote repo

<https://gist.github.com/Chaser324/ce0505fbed06b947d962>

## Rebasing and Squashing

<https://www.youtube.com/watch?v=UWwazJ_46s0> git rebase

<https://www.atlassian.com/git/tutorials/merging-vs-rebasing>

<https://www.daolf.com/posts/git-series-part-3/>

<https://medium.com/@nbelakovski/level-up-git-rebasing-and-squashing-6bff432d796e>

Another way to think about rebasing is that when you’ve rebased a branch, it’s as if you had just now created your branch off of this latest master and done all of your work on top of it

to squash all the garbage away before making a PR:

``git rebase -i ${commit_before_i_started_doing_questionable_stuff}``

<https://news.ycombinator.com/item?id=21189256>

<https://dev.to/alediaferia/git-tips-for-trunk-based-development-1i1g>

<https://stackoverflow.com/questions/20808892/git-diff-between-current-branch-and-master-but-not-including-unmerged-master-com/20809283>

```
git diff master...branch

git diff origin/master...
This shows only the changes between my currently selected local branch and the remote master branch, and ignores all changes in my local branch that came from merge commits.


git diff master...
This uses your local copy of master.

To compare a specific file use:

git diff master... filepath
```
<https://stackoverflow.com/questions/9725531/show-commits-since-branch-creation>
```
git log master...<your_branch_name>
git log master...
```
show commits since branch creation

creating a branch a couple of commits behind master:
```
git checkout --branch mytestbranch master~2

git log --oneline -2

git rebase master
```
This work:
```
git checkout master
git pull origin master
git checkout branch_i_want_to_rebase
git rebase master
```
But this work as well: it’s quicker and means I don’t have to switch branches 
```
git fetch origin master
git rebase origin/master
```


```
    git add/rm/commit/status/push
    git branch/checkout/merge/rebase
    git tag/push --tag
    git add -i
``` 
This wokrs as well and it is shorter:
```
git pull --rebase origin master
```

``
git pull -r origin master
or
git pull --rebase=interactive
``


## Squashing

<https://stackoverflow.com/questions/5189560/squash-my-last-x-commits-together-using-git>

<https://stackoverflow.com/questions/5189560/squash-my-last-x-commits-together-using-git/5201642#5201642>

 squashing is the practice of combining multiple commits into a single commit, or at least fewer commits than you started with. It is accomplished with an interactive rebase onto your own or another branch, or via git commit --amend. It can be performed simultaneously with a rebase operation.
you’re taking two or more commits and combining them into a single commit.
```
git rebase --interactive HEAD~2
```
 Instead of making all your various commits and then squashing later on via an interactive rebase, you can use the
 ``--amend`` option of git commit to edit the commit you’re currently on. So in the example above, after I made my commit to “Add build instructions to README”, I could amend that commit to include my typo fix by making the fix, staging it like I would if I was about to create a commit, and then running ``git commit --amend``.
 
## Merge conflict relosution tools

Set `merge.conflictstyle=diff3` 
The default merge style is utterly useless, I have no idea why it is the default. diff3 gives you three pieces of information: the status before at the common ancestor; the status on the current branch; and the status on the to-be-merged branch. You can then understand what changes were made on each branch, and decide how to merge them intelligently. Without that common ancestor, it's way way harder to understand what you're looking at.


<https://www.sublimemerge.com/>  Git Client, from the makers of Sublime Text
<http://vimcasts.org/episodes/fugitive-vim-resolving-merge-conflicts-with-vimdiff/>

<https://www.kaleidoscopeapp.com/> Kaleidoscope is the file comparison app. Compare different text files, images, and folders on your Mac and iPad. Review and merge changes in a matter of seconds (merging available only on the Mac).

When I want to get back to a pristine state, I prefer
```
 git reset --hard origin/master
```
over the suggested
```
 git reset --hard HEAD
```
If you use git and don't know the difference, read this: 
<https://stackoverflow.com/questions/8196544/what-are-the-git-concepts-of-head-master-origin>

* HEAD: the current commit your repo is on. Most of the time HEAD points to the latest commit in your current branch, but that doesn't have to be the case. HEAD really just means "what is my repo currently pointing at".

In the event that the commit HEAD refers to is not the tip of any branch, this is called a "detached head".

* master: the name of the default branch that git creates for you when first creating a repo. In most cases, "master" means "the main branch". Most shops have everyone pushing to master, and master is considered the definitive view of the repo. But it's also common for release branches to be made off of master for releasing. Your local repo has its own master branch, that almost always follows the master of a remote repo.

* origin: the default name that git gives to your main remote repo. Your box has its own repo, and you most likely push out to some remote repo that you and all your coworkers push to. That remote repo is almost always called origin, but it doesn't have to be.

HEAD is an official notion in git. HEAD always has a well-defined meaning. master and origin are common names usually used in git, but they don't have to be.


- Always pull w/ rebase for the current branch.

- Always merge other branches into your current branch, eg master -> feature.

- Always stage individual chunks of code one at a time to make sure I'm committing the right stuff.

- Always squash feature branches into a single commit when merging back.

- Stash changes if needed when switching branches.

- Cherry-pick one-off commits if needed.

- Append a previous commit that I haven't pushed yet if I happened to forget something.

- For complicated merge conflicts I switch to Visual Studio Code which also has a great GUI.

I constantly use
```
    git commit --fixup 6138D3A
    git rebase --autosquash --interactive origin/master
```
to keep a clean history of cohesive commits. Rarely do I change _everything_ required for an objective in one go, I still like to commit as I work, I just like the finished product to _seem_ like I did it in one go, for future maintainers' sake.
And I rebase to catch up with upstream, I can't stand having intermediate merge commits in my history and rebasing lets you resolve conflicts as they're introduced, instead of an all-at-once at the end.


When I merge my feature back to origin/master I do
`git merge --squash myFeatureBranch` 
which automatically rebases everything and keeps a clean history.

 If I'm working on a feature that I haven't pushed up yet I might squash my commits together for a cleaner history (it also helps with rebasing). 
 
 If you ever mess up a rebase and finish it before you're able to abort you can use `git reflog` to get a reference back to the previous commit. It's come super handy a few times.



Whether you're trying to give back to the open source community or collaborating on your own projects, knowing how to properly fork and generate pull requests is essential. Unfortunately, it's quite easy to make mistakes or not know what you should do when you're initially learning the process. I know that I certainly had considerable initial trouble with it, and I found a lot of the information on GitHub and around the internet to be rather piecemeal and incomplete - part of the process described here, another there, common hangups in a different place, and so on.

In an attempt to coallate this information for myself and others, this short tutorial is what I've found to be fairly standard procedure for creating a fork, doing your work, issuing a pull request, and merging that pull request back into the original project.

## Creating a Fork

Just head over to the GitHub page and click the "Fork" button. It's just that simple. Once you've done that, you can use your favorite git client to clone your repo or just head straight to the command line:

```shell
# Clone your fork to your local machine
git clone git@github.com:USERNAME/FORKED-PROJECT.git
```

## Keeping Your Fork Up to Date

While this isn't an absolutely necessary step, if you plan on doing anything more than just a tiny quick fix, you'll want to make sure you keep your fork up to date by tracking the original "upstream" repo that you forked. To do this, you'll need to add a remote:

```shell
# Add 'upstream' repo to list of remotes
git remote add upstream https://github.com/UPSTREAM-USER/ORIGINAL-PROJECT.git

# Verify the new remote named 'upstream'
git remote -v
```

Whenever you want to update your fork with the latest upstream changes, you'll need to first fetch the upstream repo's branches and latest commits to bring them into your repository:

```shell
# Fetch from upstream remote
git fetch upstream

# View all branches, including those from upstream
git branch -va
```

Now, checkout your own master branch and merge the upstream repo's master branch:

```shell
# Checkout your master branch and merge upstream
git checkout master
git merge upstream/master
```

If there are no unique commits on the local master branch, git will simply perform a fast-forward. However, if you have been making changes on master (in the vast majority of cases you probably shouldn't be - [see the next section](#doing-your-work), you may have to deal with conflicts. When doing so, be careful to respect the changes made upstream.

Now, your local master branch is up-to-date with everything modified upstream.

## Doing Your Work

### Create a Branch
Whenever you begin work on a new feature or bugfix, it's important that you create a new branch. Not only is it proper git workflow, but it also keeps your changes organized and separated from the master branch so that you can easily submit and manage multiple pull requests for every task you complete.

To create a new branch and start working on it:

```shell
# Checkout the master branch - you want your new branch to come from master
git checkout master

# Create a new branch named newfeature (give your branch its own simple informative name)
git branch newfeature

# Switch to your new branch
git checkout newfeature
```

Now, go to town hacking away and making whatever changes you want to.

## Submitting a Pull Request

### Cleaning Up Your Work

Prior to submitting your pull request, you might want to do a few things to clean up your branch and make it as simple as possible for the original repo's maintainer to test, accept, and merge your work.

If any commits have been made to the upstream master branch, you should rebase your development branch so that merging it will be a simple fast-forward that won't require any conflict resolution work.

```shell
# Fetch upstream master and merge with your repo's master branch
git fetch upstream
git checkout master
git merge upstream/master

# If there were any new commits, rebase your development branch
git checkout newfeature
git rebase master
```

Now, it may be desirable to squash some of your smaller commits down into a small number of larger more cohesive commits. You can do this with an interactive rebase:

```shell
# Rebase all commits on your development branch
git checkout 
git rebase -i master
```

This will open up a text editor where you can specify which commits to squash.

### Submitting

Once you've committed and pushed all of your changes to GitHub, go to the page for your fork on GitHub, select your development branch, and click the pull request button. If you need to make any adjustments to your pull request, just push the updates to GitHub. Your pull request will automatically track the changes on your development branch and update.

## Accepting and Merging a Pull Request

Take note that unlike the previous sections which were written from the perspective of someone that created a fork and generated a pull request, this section is written from the perspective of the original repository owner who is handling an incoming pull request. Thus, where the "forker" was referring to the original repository as `upstream`, we're now looking at it as the owner of that original repository and the standard `origin` remote.

### Checking Out and Testing Pull Requests
Open up the `.git/config` file and add a new line under `[remote "origin"]`:

```
fetch = +refs/pull/*/head:refs/pull/origin/*
```

Now you can fetch and checkout any pull request so that you can test them:

```shell
# Fetch all pull request branches
git fetch origin

# Checkout out a given pull request branch based on its number
git checkout -b 999 pull/origin/999
```

Keep in mind that these branches will be read only and you won't be able to push any changes.

### Automatically Merging a Pull Request
In cases where the merge would be a simple fast-forward, you can automatically do the merge by just clicking the button on the pull request page on GitHub.

### Manually Merging a Pull Request
To do the merge manually, you'll need to checkout the target branch in the source repo, pull directly from the fork, and then merge and push.

```shell
# Checkout the branch you're merging to in the target repo
git checkout master

# Pull the development branch from the fork repo where the pull request development was done.
git pull https://github.com/forkuser/forkedrepo.git newfeature

# Merge the development branch
git merge newfeature

# Push master with the new feature merged into it
git push origin master
```

Now that you're done with the development branch, you're free to delete it.

```shell
git branch -d newfeature
```



**Copyright**

Copyright 2017, Chase Pettit

MIT License, http://www.opensource.org/licenses/mit-license.php
 
**Additional Reading**
* [Atlassian - Merging vs. Rebasing](https://www.atlassian.com/git/tutorials/merging-vs-rebasing)
