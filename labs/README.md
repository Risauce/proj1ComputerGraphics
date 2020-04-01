# Labs

This folder of the repository is where all your lab assignments and code will be
provided. You will fork the repository into your own private Bitbucket
repository, where you will make your additions to the code base. We use
Bitbucket because private repositories are free. On GitHub, you will need a paid
or an academic account to have private repos.  I will add assignments to
this repository throughout the semester so you will need to follow the
instructions below in order to keep your repository up-to-date, while also being
able to push changes up to your own personal repository.


## Submission

When submitting the labs please tag the commit with the name of the assignment.
E.g. `lab01` or `lab10`.
Please make sure to use TWO digits for the number of the lab. For
more on tagging commits, see [tagging
tutorial](https://www.atlassian.com/git/tutorials/inspecting-a-repository/git-tag).
For the submission, please use use the following template:

**For your repo url.  Please use the ssh url (the one that starts with
`git@bitbucket.org:....`)**

    name: <your name>
    collab: <your collaborators>
    url: <url of git repo>
    hash: <commit hash>


## Sign up for Bitbucket

First, you'll need a Bitbucket account, so [sign up
here](https://bitbucket.org/account/signup/).

## Fork the repository

You'll need to fork this repository into your own private repository. In the
left hand menu you can click the '+' button.  A menu will slide out. Fork the
repository by clicking 'Fork this repository' to start the process.  Change the
name to be more descriptive and add a description if you like.  Check 'This is a
private repository', so no one else has access to it (we'll add your lab
teammates in a bit). Click the 'Fork repository' button.

## Share the repository

You must share your repository with me (and our course assistants) so that we
can grade your work.  In the upper right, there is usually an 'Invite users to
this repo' box with a 'Send invitation' button. Click the button to add users
(my username is `david_millman`, TBA's username is `TBA`). If the 'Invite
users to this repo' box isn't there, you can also add users through the
'Settings' menu on the left hand side. Click 'Settings', then 'User and Group
access', where you can add users.

## Install Git

Now we need to make sure git is installed. There are a number of git GUI
clients, including Bitbucket's
[SourceTree](https://www.atlassian.com/software/sourcetree/overview), or
[others](http://git-scm.com/downloads/guis).  I'll leave you to figure out your
GUI of choice on your own if you like.  I always stick to the command line when
I can, so that's what I'll be showing you how to do. In a terminal run the
following:

    git --version

If you get an error you may need to [download and install
git](http://git-scm.com/downloads).  If you've never used git before you might
want to [read up on the docs](http://git-scm.com/doc), or go through the basics
with [Try Git](try.github.com).

## Clone your repository

To download your repository so it's ready for modifications, we need to clone
it.  Once git is installed, run the following command with <repo url> replaced
with the url to your repository (shown in the upper left of the Overview page on
Bitbucket).  It'll look something like
`https://david_millman@bitbucket.org/david_millman/csci-441-spring2020.git`

    git clone <repo url>

It'll ask for your Bitbucket password. You'll have to enter your password every
time you want to push changes up to Bitbucket or pull changes down, unless you
set up SSH keys (go to Manage Account in the top right most menu, then under
security is SSH keys).

## How to pull the latest assignments

I'll be adding assignments here throughout the semester so you'll need to add
this repository as a remote that you can pull changes from. Make sure you cd
into your repository, something like (depending on what you named it):

    cd csci-441-spring2020

Then let's list what remotes we currently have:

    git remote -v

You should see two entries for your Bitbucket repository, one (fetch) and one
(push). When you use `git push` or `git pull`, by default you'll push or pull
to/from that url. We want to add another entry that we can explicitly pull from
to merge in assignments as I add them. To do that, run the following:

    git remote add csci441 https://bitbucket.org/msu-cs/csci-441-spring2020

Now if you run the `git remote -v` command you'll see two additional entries.
You won't have permission to push to this one, but you will be able to pull new
assignments by running the following:

    git pull csci441 master

Bitbucket also has shortcuts for syncing forked repositories. On the right hand
side on your Bitbucket repository, there will likely be a box indicating your
fork is out of sync when I add new labs. You can click the 'Sync now' link to
automatically pull in the new assignments.

## Install CMake

All assignments and labs will be build with CMake. You can install it from the
[cmake downloads page](https://cmake.org/download/).  Follow the instructions
for your platform.

## Build Lab 1

Once you have cmake installed, try compiling and running the provided lab 1
code.  Cmake projects are organized using `CMakeLists.txt` files. The `cmake`
command can generate a Makefile (or an Xcode project, or a Visual Studio
project). I like to stick to using a Makefile so I can stay in a terminal:

    cd lab1
    mkdir build
    cd build
    cmake ..
    make
    ./lab1

    Windows users:
    (SOMEONE WILL HAVE TO HELP ME WITH THIS ONE, I DON'T HAVE A WINDOWS BOX)

It should print "Success" to the terminal and triangle.bmp should be a blank,
black image.  (In a future lab, it will be your job to make it output a
triangle).

## How To Save Your Work

Once you start making changes to your code, you'll want to commit those changes
and push them back up to Bitbucket. You should do this often to keep a good
history of what changes you made and why. It also ensures your files are safely
stored on the server.

For every file you've changed or created, you'll want to run `git add <file
name>`. The command stages the file for commit. You can think of staging a file
as flagging that you want to save it in your next commit. Once you've staged
every file that you want to commit type:

    git commit -m "A short description of what you're committing"

It can be handy to see what files have been changed. To see what changes have
been made you can use `git status`. `git status` will show you which files
you've modified, which files are new and which files have been staged for
commit.

When working in a group, writing good commit messages are very important.  Your
collaborators (and even your future self) will be very thankful for well crafted
messages.  For more on how to write good commit messages, see blogs from
[erlang project](https://github.com/erlang/otp/wiki/writing-good-commit-messages),
[Tim Pope](http://tbaggery.com/2008/04/19/a-note-about-git-commit-messages.html),
or, [Chris Beams](https://chris.beams.io/posts/git-commit/).

Sometimes, git can be a little finicky if you have trailing white space in the
file. Often, your text editor or IDE has an option (or plugin) to automatically
trim trailing white space. It is a good idea to enable automatic trimming of
trailing white space as it can save your some headaches in the future.

Be careful of is to not commit files that are generated by the build process
(i.e. the Makefile, the final executable, .o files, etc.).  I've included a
.gitignore file in the repository that will ignore most files that will be
generated by your build processes, but others may be generated as well that I'm
not aware of (especially if you're running your code on Windows).

You can commit as many times as you want locally. When you're ready to submit
all your commits up to the server, where I can see them, run:

    git push origin master

If you've cloned your repository in more than one location (such as on a lab
computer and on your own laptop) and have made changes to one of them and pushed
those changes up to the server, you can use `git pull` from the other location
to bring it up to date.

## Submitting your work

For the labs, you may be able to just demo your work to me or the TA in class or
in office hours before the deadline, but this may be difficult as there are many
students.  An alternative would be for the assignment that you are turning in,
submit on D2L.  The submission should contain your your team members' names, a
link to your repository, and hash value of the commit that you are submitting.
(See below for how to get a commit's hash.)

** Note: Normally with git, forks are used to make changes to a repository that
you don't own. After implementing a feature, usually a pull request is issued
from your fork to the original repository. The maintainers of the original
repository can choose to incorporate your changes or not. Unfortunately, pull
requests on public repositories (like this one), are public as well. So if you
were to turn in your work using pull requests, anyone could view it, so we're
NOT using pull requests. **

## More Git Basics

Git is a distributed version control system (VCS). When you cloned the
repository above, you downloaded every change that has ever been made to the
repository. You can see each individual change by running the following:

    git log

You'll see a list of commits, which are changes to a set of files in your
repository. Each commit looks something like this (this is the first commit to
your repository, made by me):

    commit fd550eaab023eef5deb3f00aa2265d3dbbd5c5ed
    Author: David Millman <david.millman@montana.edu>
    Date:   Thu Jan 4 20:05:31 2018 -0700

        Add initial version of syllabus

The first line shows the hash value for the commit. If you ever want to revert
back to a specific commit you can use `git checkout <hash value>`. In your
repository, you can type the following to get to the very first change ever
made:

    git checkout fd550eaab023eef5deb3f00aa2265d3dbbd5c5ed

To get back to the lastest, you can run:

    git checkout master

For a more, check out a
[fully featured git cheat sheet](https://www.atlassian.com/git/tutorials/atlassian-git-cheatsheet).
The [official git documentation](http://git-scm.com/doc). And a great
course on [Udacity](https://www.udacity.com/course/how-to-use-git-and-github--ud775).
