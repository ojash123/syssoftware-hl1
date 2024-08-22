/*
Ojas Hegde
MT2024105
15. Write a program to display the environmental variable of the user (use environ).
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv, char **envp){
    for (char **env = envp; *env != 0; env++)
    {
        printf("%s\n", *env);
    }
    
}

/*
$ ./a.out 
SHELL=/bin/bash
SESSION_MANAGER=local/ojas-Lenovo-V14-IIL:@/tmp/.ICE-unix/1952,unix/ojas-Lenovo-V14-IIL:/tmp/.ICE-unix/1952
QT_ACCESSIBILITY=1
COLORTERM=truecolor
XDG_CONFIG_DIRS=/etc/xdg/xdg-ubuntu:/etc/xdg
XDG_MENU_PREFIX=gnome-
TERM_PROGRAM_VERSION=1.92.2
XDG_CONFIG_DIRS_VSCODE_SNAP_ORIG=/etc/xdg/xdg-ubuntu:/etc/xdg
GNOME_DESKTOP_SESSION_ID=this-is-deprecated
GDK_BACKEND_VSCODE_SNAP_ORIG=
GIO_MODULE_DIR_VSCODE_SNAP_ORIG=
GNOME_SHELL_SESSION_MODE=ubuntu
SSH_AUTH_SOCK=/run/user/1000/keyring/ssh
MEMORY_PRESSURE_WRITE=c29tZSAyMDAwMDAgMjAwMDAwMAA=
XMODIFIERS=@im=ibus
DESKTOP_SESSION=ubuntu
BAMF_DESKTOP_FILE_HINT=/var/lib/snapd/desktop/applications/code_code.desktop
GTK_MODULES=gail:atk-bridge
PWD=/home/ojas/Desktop/systems software
GSETTINGS_SCHEMA_DIR=/home/ojas/snap/code/167/.local/share/glib-2.0/schemas
XDG_SESSION_DESKTOP=ubuntu
LOGNAME=ojas
GTK_EXE_PREFIX=/snap/code/167/usr
XDG_SESSION_TYPE=wayland
SYSTEMD_EXEC_PID=1980
XAUTHORITY=/run/user/1000/.mutter-Xwaylandauth.OLYVS2
VSCODE_GIT_ASKPASS_NODE=/snap/code/167/usr/share/code/code
IM_CONFIG_CHECK_ENV=1
GJS_DEBUG_TOPICS=JS ERROR;JS LOG
HOME=/home/ojas
USERNAME=ojas
IM_CONFIG_PHASE=1
LANG=en_US.UTF-8
LS_COLORS=rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:mi=00:su=37;41:sg=30;43:ca=00:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arc=01;31:*.arj=01;31:*.taz=01;31:*.lha=01;31:*.lz4=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.tzo=01;31:*.t7z=01;31:*.zip=01;31:*.z=01;31:*.dz=01;31:*.gz=01;31:*.lrz=01;31:*.lz=01;31:*.lzo=01;31:*.xz=01;31:*.zst=01;31:*.tzst=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.alz=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.cab=01;31:*.wim=01;31:*.swm=01;31:*.dwm=01;31:*.esd=01;31:*.avif=01;35:*.jpg=01;35:*.jpeg=01;35:*.mjpg=01;35:*.mjpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.webp=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.m4a=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.oga=00;36:*.opus=00;36:*.spx=00;36:*.xspf=00;36:*~=00;90:*#=00;90:*.bak=00;90:*.crdownload=00;90:*.dpkg-dist=00;90:*.dpkg-new=00;90:*.dpkg-old=00;90:*.dpkg-tmp=00;90:*.old=00;90:*.orig=00;90:*.part=00;90:*.rej=00;90:*.rpmnew=00;90:*.rpmorig=00;90:*.rpmsave=00;90:*.swp=00;90:*.tmp=00;90:*.ucf-dist=00;90:*.ucf-new=00;90:*.ucf-old=00;90:
XDG_CURRENT_DESKTOP=Unity
MEMORY_PRESSURE_WATCH=/sys/fs/cgroup/user.slice/user-1000.slice/user@1000.service/session.slice/org.gnome.Shell@wayland.service/memory.pressure
WAYLAND_DISPLAY=wayland-0
GIT_ASKPASS=/snap/code/167/usr/share/code/resources/app/extensions/git/dist/askpass.sh
INVOCATION_ID=ec0cac676ab94e6f9d432c9e130f8055
MANAGERPID=1730
CHROME_DESKTOP=code-url-handler.desktop
GJS_DEBUG_OUTPUT=stderr
VSCODE_GIT_ASKPASS_EXTRA_ARGS=
GNOME_SETUP_DISPLAY=:1
GSETTINGS_SCHEMA_DIR_VSCODE_SNAP_ORIG=
GTK_IM_MODULE_FILE_VSCODE_SNAP_ORIG=
LESSCLOSE=/usr/bin/lesspipe %s %s
XDG_SESSION_CLASS=user
TERM=xterm-256color
GTK_PATH=/snap/code/167/usr/lib/x86_64-linux-gnu/gtk-3.0
LESSOPEN=| /usr/bin/lesspipe %s
USER=ojas
GTK_PATH_VSCODE_SNAP_ORIG=
VSCODE_GIT_IPC_HANDLE=/run/user/1000/vscode-git-4cee9ed00c.sock
DISPLAY=:0
SHLVL=1
LOCPATH=/snap/code/167/usr/lib/locale
GSM_SKIP_SSH_AGENT_WORKAROUND=true
QT_IM_MODULE=ibus
GTK_EXE_PREFIX_VSCODE_SNAP_ORIG=
XDG_RUNTIME_DIR=/run/user/1000
XDG_DATA_DIRS_VSCODE_SNAP_ORIG=/usr/share/ubuntu:/usr/share/gnome:/usr/local/share/:/usr/share/:/var/lib/snapd/desktop
DEBUGINFOD_URLS=https://debuginfod.ubuntu.com 
VSCODE_GIT_ASKPASS_MAIN=/snap/code/167/usr/share/code/resources/app/extensions/git/dist/askpass-main.js
JOURNAL_STREAM=8:16061
XDG_DATA_DIRS=/home/ojas/snap/code/167/.local/share:/home/ojas/snap/code/167:/snap/code/167/usr/share:/usr/share/ubuntu:/usr/share/gnome:/usr/local/share/:/usr/share/:/var/lib/snapd/desktop
GDK_BACKEND=x11
PATH=/home/ojas/go/bin:/usr/local/go/bin:/home/ojas/.local/bin:/home/ojas/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/snap/bin
GDMSESSION=ubuntu
ORIGINAL_XDG_CURRENT_DESKTOP=ubuntu:GNOME
DBUS_SESSION_BUS_ADDRESS=unix:path=/run/user/1000/bus
GTK_IM_MODULE_FILE=/home/ojas/snap/code/common/.cache/immodules/immodules.cache
LOCPATH_VSCODE_SNAP_ORIG=
ENVMAN_LOAD=loaded
GIO_MODULE_DIR=/home/ojas/snap/code/common/.cache/gio-modules
GIO_LAUNCHED_DESKTOP_FILE_PID=5232
GIO_LAUNCHED_DESKTOP_FILE=/var/lib/snapd/desktop/applications/code_code.desktop
TERM_PROGRAM=vscode
_=./a.out
*/