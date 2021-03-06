 <https://news.ycombinator.com/item?id=23229241> .  Linux Productivity Tools (2019)   (usenix.org)
 
 <https://news.ycombinator.com/item?id=23468193>
 
 <https://zaiste.net/posts/shell-commands-rust/>
 
 ### ENTR GAZE etc
 
 https://www.reddit.com/r/programming/comments/hbetyd/gaze_a_cli_tool_that_accelerates_your_quick_coding/
 
 
 https://github.com/wtetsu/gaze  Gaze runs a command, right after you save a file.
 
 https://jvns.ca/blog/2020/06/28/entr/
 
 https://lobste.rs/s/wjaf39/entr_rerun_your_build_when_files_change entr 
 
 
 ## Terminal shortcats
<https://ramantehlan.github.io/blog/post/terminalshortcuts/>

<https://blog.balthazar-rouberol.com/shell-productivity-tips-and-tricks.html>



 ```
 set -o vi
 ```
 <https://catonmat.net/ftp/bash-vi-editing-mode-cheat-sheet.pdf>
 
 
 
 
 <https://switowski.com/blog/favorite-cli-tools>
 
 
### How linux works

<https://neilkakkar.com/unix.html>

<https://likegeeks.com/linux-process-management/>

### Screen

<https://www.wagner.pp.ru/fossil/advice/doc/trunk/screen.md>

## Networking
<https://habr.com/ru/post/491540/>

## Linux tools
<https://news.ycombinator.com/item?id=22438730>

<https://news.ycombinator.com/item?id=22849208> programs which  save you hours


<https://github.com/wting/autojump> autojump

## bash job control

<https://www.linuxjournal.com/content/job-control-bash-feature-you-only-think-you-dont-need>

Job control is what allows you to suspend jobs, move jobs from the background to the foreground, and vice versa, from the foreground to the background. Running a script with script & creates a background job. Running a script with just script creates a foreground job.

Job control consists of the following commands:

* The fg command moves a background job into the foreground.
* The bg command moves a suspended foreground job into the background.
* The jobs command shows the current list of jobs.
* The kill command can kill jobs or send signals to them.
* The disown command removes a job from the list of jobs (without killing it).
* A foreground job can be suspended by typing ^Z (Control-Z). A suspended job is temporarily stopped.

## Disable buffering
Многие консольные утилиты буферизируют stdout. Из-за этого последовательный pipe ломается. 

Некоторые утилиты поддерживают настройку буферизации: sed -u, grep --line-buffered. 

В другом случае можно использовать универсальный способ stdbuf -oL и unbuffer.

### CRON
<https://habr.com/ru/company/badoo/blog/465021/>  cron etc processes PATH
<https://habr.com/ru/company/badoo/blog/468061/> .  CRON

###  bash  

<https://blog.balthazar-rouberol.com/shell-productivity-tips-and-tricks.html>

<https://news.ycombinator.com/item?id=22975437>

shellcheck  <https://www.shellcheck.net/>

Bypass finding in hidden folders:
```
find . -type f -not -path '*/\.*' | xargs grep "docker run"
```
<http://wiki.bash-hackers.org/>


To redirect the error message to NUL:
```
   dir file.xxx 2> nul
```   
Redirect the output to one place, and the errors to another:
```
   dir file.xxx > output.msg 2> output.err
```   
Combine errors and standard output to a single file: 
Redirect the output for STDERR to STDOUT and then sending the output from STDOUT to a file:
```
   dir file.xxx 1> output.msg 2>&1
   
   cmd >>file.txt 2>&1
```

```
command 2>&1 | tee -a logfile
here -a means :  Append the output to the files rather than overwriting them.
```
<https://shellmagic.xyz/>
<http://hyperpolyglot.org/>

<https://github.com/jlevy/the-art-of-command-line>

<https://www.gnu.org/software/bash/manual/html_node/The-Set-Builtin.html#The-Set-Builtin>
<https://unix.stackexchange.com/questions/41571/what-is-the-difference-between-and/41595#41595> . $@ vs $*
<https://blog.yossarian.net/2020/01/23/Anybody-can-write-good-bash-with-a-little-effort>
<https://github.com/anordal/shellharden/blob/master/how_to_do_things_safely_in_bash.md>
<http://caiustheory.com/bash-script-setup/>
<http://zwischenzugs.com/2018/01/06/ten-things-i-wish-id-known-about-bash/>

   bash_ru.pdf bash manual 

```
mkdir blabla
cd !$ .  <- previous command argument
sudo !! - prev command with root priv
```

https://habr.com/company/ruvds/blog/413725/    -- arrays is bash

### what is sh -c  
https://askubuntu.com/questions/831847/what-is-the-sh-c-command
https://stackoverflow.com/questions/82256/how-do-i-use-sudo-to-redirect-output-to-a-location-i-dont-have-permission-to-wr

how-to-get-the-source-directory-of-a-bash-script-from-within-the-script-itself?
https://stackoverflow.com/questions/59895/how-to-get-the-source-directory-of-a-bash-script-from-within-the-script-itself/  

```  
#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
echo $DIR
echo "The script basename `basename "$0"`"
  
```
### bash func() - add to .bashrc
```
function mcd(){
   mkdir -p "$1"
   cd "$1"
}

dirinfo()
{
    du -ah "$1" | sort -rh | head -n 20
}
alias dirinfo=dirinfo()
```

```
!#/bin/bash

# function which tests what $1 exists:
function test1() { command -v "$1" >/dev/null 2>&1; }
# function which tests what $1 exists but in different way:
function test2() { type -P "$1" >/dev/null; }

function die {
  >&2 echo "Fatal: ${@}"
  exit 1
}

echo ${BASH_VERSINFO[0]}
#[[ "${BASH_VERSINFO[0]}" -lt 4 ]] && die "Bash >=4 required"

## list of programs to be checked: curl nc dig:
deps=(curl nc dig)
for dep in "${deps[@]}"; do
  echo $dep
  test1 "${dep}" || die "Missing '${dep}'"
done
  
# 2 ways to chech what program (e.g. curl) exists (type and command):  
(base) [BASH_FUNC]$ type -p curl
/Users/miclub01/anaconda3/bin/curl
(base) [BASH_FUNC]$ command -v curl
/Users/miclub01/anaconda3/bin/curl
  
```  
  
### alias 

```
alias alog="tail -f /var/log/apache2/error.log"
alias please='sudo $(fc -ln -1)'

## open file from comman line with some editor:
alias tw='open -a /Applications/TextWrangler.app'
tw /path/I/want/opened/
```

https://direnv.net/


 
1 for stdout and 2 for stderr.

```
cat foo.txt > output.txt 2>&1
time echo foo 2>&1 > file.txt
```

###  nohup 
  
```  
 nohup my_cmd > run.log 2>&1 & tail -f run.log

 nohup my_cmd 1>&2  | tee nohup.out &
```

If you check the output file nohup.out during execution 
you might notice that the outputs are not written into this file until the execution is finished. 
This happens because of output buffering. If you add the -u flag you can avoid output buffering like this:
```
nohup python -u ./test.py &
```
or by specifying a log file:
```
nohup python -u ./test.py > output.log &
```

###  Command-line tools  

https://github.com/learn-anything/command-line-tools#readme
https://www.wezm.net/technical/2019/10/useful-command-line-tools/
https://news.ycombinator.com/item?id=21363121

https://peteris.rocks/blog/htop/

https://sneak.berlin/20191011/stupid-unix-tricks/
https://news.ycombinator.com/item?id=21281025

https://kvz.io/tobuntu.html . configuring ubuntu

### CSV SQL  JSON tools
https://www.johndcook.com/blog/2019/12/31/sql-join-csv-files/
https://news.ycombinator.com/item?id=21923911 	Doing a database join with CSV files
https://news.ycombinator.com/item?id=20848581 . TSV CSV JSON command line tools
https://github.com/jolmg/cq . CQ - SQL for CSV
https://github.com/johnkerl/miller .  Miller
```
  sqlite> .mode csv
  sqlite> .header on
  sqlite> .import weight.csv weight
  sqlite> .import person.csv person
  sqlite> select * from person, weight where person.ID = weight.ID;
  ID,sex,ID,weight
  123,M,123,200
  789,F,789,155
```  
 
rq fills a similar niche as tools like awk or sed, but works with structured (Avro, JSON, ProtoBuff) data instead of text.
https://github.com/dflemstr/rq

https://github.com/johnkerl/miller Miller is like awk, sed, cut, join, and sort for name-indexed data such as CSV, TSV, and tabular JSON 
http://stedolan.github.io/jq/
 
https://github.com/BurntSushi/xsv
There is very little overlap between what xsv does and what standard Unix tools like `join` do. 
Chances are, if you're using xsv for something like this, 
then you probably can't correctly use `join` to do it because `join` does not understand the CSV format.


https://github.com/antonmedv/fx JSON viewer


  
  https://habr.com/ru/post/462045/ .  /bin /sbin /usr/local/bin /home/user/bin
  https://habr.com/ru/company/first/blog/461251/   Julia Evans slides

  https://news.ycombinator.com/item?id=17874718
  
###   Logging
  https://news.ycombinator.com/item?id=20818106 

###  kills a process given its port number (4567):
```  
  kill -9 $(lsof -ti tcp:4567)
```

  List of ports in use: 
```  
  sudo lsof -iTCP -sTCP:LISTEN -P | grep 5002
       lsof -i -P -n | grep 8000
```
  find IP:
  
    dig +short myip.opendns.com @resolver1.opendns.com
    ifconfig | grep "inet " | grep -Fv 127.0.0.1 | awk '{print $2}'


### Run a long running script, but not if another copy of it is already running.

FLOCK:
https://linux.die.net/man/1/flock 

flock(1) is not POSIX, though. mkdir(1) can be used if you absolutely want a POSIX way to manage locks. 
For example:

```
    if ! mkdir .lock; then
        printf >&2 "Already running?\\n"
        exit 1
    fi
```    
Some network file system implementation do not guarantee atomic mkdir, so you still need an extra caution with this method.


### Script to automatically run program if file timestamp changed  (ENTR)

https://jvns.ca/blog/2020/06/28/entr/

<https://stackoverflow.com/questions/18599339/python-watchdog-monitoring-file-for-changes>

 https://github.com/cortesi/modd/
 
 https://news.ycombinator.com/item?id=23698305
 
<https://www.michaelcho.me/article/using-pythons-watchdog-to-monitor-changes-to-a-directory>

https://github.com/watchexec/watchexec

<https://facebook.github.io/watchman/>

https://facebook.github.io/watchman/docs/watchman-make

https://github.com/cespare/reflex

<https://gist.github.com/davidmoreno/c049e922e41aaa94e18955b9fac5549c>

<http://z3bra.org/wendy/>

<http://blog.z3bra.org/2015/03/under-wendys-dress.html>

<https://linux.die.net/man/1/watch>

<https://linux.die.net/man/1/inotifywait>

<https://github.com/fsnotify/fsnotify> (written in Go — golang)

<https://github.com/emcrisostomo/fswatch> (written in C++)

<https://github.com/watchexec/watchexec> (written in Rust)

<http://eradman.com/entrproject/>     www.entrproject.org/ run alternative command when file changed

```
#!/usr/bin/env bash
script="$1"; shift
last_mod=0
 
while true; do
    curr_mod=$(stat -f "%m" "$script")
    if ((curr_mod != last_mod)); then
        last_mod=$curr_mod
        clear
        printf "\nOutput of %s:\n\n" "$script"
        "$script" "$@"
        script_ec=$?
        if (( $script_ec != 0 )); then
            printf "\nWARNING: %s exited with non-zero exit code %d" "$script" $script_ec >&2
        fi
        last_mod=$curr_mod
    fi
 
    sleep 1
done
 
exit 0
```
  
###  Process supervisor 
http://supervisord.org/index.html

### Memory CPU
https://habrahabr.ru/company/badoo/blog/338226/
https://blog.codecentric.de/en/2017/09/jvm-fire-using-flame-graphs-analyse-performance/
https://waterprogramming.wordpress.com/2017/06/08/profiling-c-code-with-callgrind/
https://medium.com/flawless-app-stories/debugging-swift-code-with-lldb-b30c5cf2fd49   LLDB
https://jvns.ca/blog/2017/07/05/linux-tracing-systems/
http://www.brendangregg.com/sysperfbook.html
```
top -c
free -m
```

### lsof 
https://habrahabr.ru/post/353322/    lsof


Sort processed by memory consumption
```ps aux | sort -nk 4```
Sort processed by CPU consumption
```ps aux | sort -nk 3```


https://nicolargo.github.io/glances/ computer performance in python

https://tech.marksblogg.com/top-htop-glances.html

https://github.com/iipeace/guider



 


### MS Excel  
http://supercoolpics.com/10-bystryh-fishek-v-rabote-s-microsoft-excel/

###  grep  
Use -v to show those that do not contain “match”: grep -v match file.txt
Use -c to count how many matches: grep -c match file.txt
Show list of files that match: grep -rl match *
Number of lines to show before and after match: grep -B 2 -A 2 match file.txt


## tr (also exists: expand and unexpand)  
```
cat geeks.txt | tr ':[space]:' '\t' > out.txt  - replace spaces with tabso
cat myfile | tr a-z A-Z > output.txt
```

### xargs  
```
find. -name "*.png" -type f -printi0 | xargsi -0 tar -cvzf images.tar.gz
ls /etc/*.conf | xargs -i cp {} /home/likegeeks/Desktop/out
```
### Table-oriented output:  column  
```
mount | column -t
cat /etc/passwd | column -t –s :
column -t < /etc/passwd
```

### Run command till it succeed (v1):

while ! [command]; do sleep 1; done

### Run command till it succeed (v2):
```
while  sleep 1
do
   ping -c 1 google.com > /dev/null 2>&1 && break
done
```


watch df -h
nohup

###  Yes/No automation 
yes | command
yes no | command

### bash examples 
Calculation in bash:
    echo $((37 * 42))

Example of bash function:
    set -e
```
    download_command () {
        if type wget >/dev/null 2>&1; then
            echo "wget -q -O-"
        elif type curl >/dev/null 2>&1; then
            echo "curl -sL"
        else
            echo "Error: curl or wget is required" >&2
            exit 1
        fi
    }

    download=$(download_command)
    public_v4=$($download http://whatismyip.akamai.com/)
    public_v6=$($download http://ipv6.whatismyip.akamai.com/)
```

### Find union, intersection and difference 
http://blog.deadvax.net/2018/05/29/shell-magic-set-operations-with-uniq/
https://news.ycombinator.com/item?id=17183092

```
    cat a b | sort | uniq > c   # c is a union b
    cat a b | sort | uniq -d > c   # c is a intersect b
    cat a b b | sort | uniq -u > c   # c is set difference a - b
```
###  AWK  
```cat log.log | awk '{ print $1 }'```

https://news.ycombinator.com/item?id=20308865 .  AWK by example
  
https://github.com/thewhitetulip/awk-anti-textbook
https://github.com/noyesno/awka compiles awk to C for speed
  
  
### make  
https://learnxinyminutes.com/docs/make/



 
