#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

int main(){
    pid_t pid = fork();
    if (pid == 0) {
        chdir("/");

        setsid();

        printf("starting my daemon\n");

        close(stdout);
        close(stdin);
        close(stderr);

        openlog("myDaemon", LOG_PID, LOG_DAEMON);

        syslog(LOG_NOTICE, "daemon started 4");
        usleep(3000000);
        
        syslog(LOG_NOTICE, "daemon doing som work... 4");
        usleep(3000000);

        syslog(LOG_NOTICE, "daemon deamon finished 4");      

    }

    else{
        printf("daemon PID %d\n",pid);
    }

    return 0;
}