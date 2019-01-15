#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>

#define MAXLEN = 128;	// the max number of letters
#define MAXCOM = 128;	// the max amount of commands

void init()
{
    clear();
    
    printf("********** CWU SHELL **********\n");
    printf("******* by Matt Harker ********\n");
    
    
}

int getInput(char* str)
{
    char* = buff;
    buff = readline("\n>> ");
    
    if(strlen(buff) != 0)
    {
        add_history(buff);
        strcpy(str, buff);
        return 0;
    }
    else
    {
        return 1;
    }
}

int directory()
{
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));
    printf(\nDir: %s", cwd);
}

// displays the speed of the cpu clock
void displayCpuClock()
{
    system("lscpu | grep 'MHz'");
}

// displays the brand of the cpu
void displayCpuType()
{
    system("cat /proc/cpuinfo | grep 'vendor' | uniq");
}

// prints the number of cores
void displayCpuCores()
{
    // write is used as system() is not buffered
    write(1, "Number of cores: ", 17);  
    system("nproc --all");
}

// displays the amount of available ram
void displayAvailableRam()
{
    system("cat /proc/meminfo | grep 'MemAvailable'");
}

// displays the amount of used ram
void displayUsedRam()
{
    long memFree = system("cat /proc/meminfo | grep 'Active:'");
}

// displays the size of the L2 chache/core in bytes
void displayChache()
{
    write(1, "Size of L2 cache (bytes): ", 26);
    long memFree = system("getconf LEVEL2_CACHE_SIZE");
}

int main()
{
    display
}
