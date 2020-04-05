## GUI

<https://gitexplorer.com/>



<https://git-fork.com/> Fork: UI for Git

<https://www.sublimemerge.com/>  Git UI Client, from the makers of Sublime Text


<https://codersbible.com/5-git-commands-to-know-just-after-you-get-the-basics/>

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

*HEAD: the current commit your repo is on. Most of the time HEAD points to the latest commit in your current branch, but that doesn't have to be the case. HEAD really just means "what is my repo currently pointing at".

In the event that the commit HEAD refers to is not the tip of any branch, this is called a "detached head".

*master: the name of the default branch that git creates for you when first creating a repo. In most cases, "master" means "the main branch". Most shops have everyone pushing to master, and master is considered the definitive view of the repo. But it's also common for release branches to be made off of master for releasing. Your local repo has its own master branch, that almost always follows the master of a remote repo.

*origin: the default name that git gives to your main remote repo. Your box has its own repo, and you most likely push out to some remote repo that you and all your coworkers push to. That remote repo is almost always called origin, but it doesn't have to be.

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
