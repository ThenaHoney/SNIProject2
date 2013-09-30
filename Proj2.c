#include<stdio.h>
#include<string.h>

/**Functions**/
int validateCmd(char *cmd); 
int misspellCmd(char *cmd);
void terminateProcess();
int list(char *cmd);
int grep(char *cmd);
int cat(char *cmd);
int gcc(char *cmd);

int main()
{
    int i=0;
    while(i==0)
    {
    char cmd[10];
    printf("Enter command: ");
    scanf("%s",cmd);
    validateCmd(cmd);
    }
}
/*Validates the first input Vector which is the command entered by the user.*/
int validateCmd(char *cmd)
{
         if (strcmp( cmd, "ls")==0)
              list(cmd);
         else if (strcmp( cmd, "grep")==0)
              grep(cmd);
         else if (strcmp( cmd, "cat")==0)
              cat(cmd);
         else if (strcmp( cmd, "gcc")==0)
              gcc(cmd);
         else if (strcmp( cmd, "exit")==0)
             terminateProcess();//kill();
         else if ((strlen(cmd) == 2)&&(cmd[0]=='l'|| cmd[1]== 's'))
              fprintf(stderr, "You have misspelled the command 'ls' as %s\n", cmd);
         else
             misspellCmd(cmd);
         
   }
             
int list(char *cmd)
{
    
    }
int grep(char *cmd)
{
    /*       else if (strcmp( cmd, "slow")==0)
         {
              exec();
              }*/
    }
int cat(char *cmd)
{
    
    
    }
int gcc(char *cmd)
{
    
    
    }
/*Checks if the first input vector which is the command entered by the user is misspelled by any chance.
Appropriate error message is generated depending on the error*/
int misspellCmd(char *cmd)
{
    if (strlen(cmd) == 3)
    {
       if (cmd[0]=='c'|| cmd[1]== 'a' || cmd[2] == 't')
          fprintf(stderr, "You have misspelled the command 'cat' as %s\n", cmd);   
       else if(cmd[0]=='g'|| cmd[1]== 'c' || cmd[2] == 'c')
          fprintf(stderr, "You have misspelled the command 'gcc' as %s\n", cmd);  
       else
          fprintf(stderr, "Invalid Command!\n");
       }
    else if (strlen(cmd) == 4)
    {
       if (cmd[0]=='g'|| cmd[1]== 'r' || cmd[2] == 'e' || cmd[3] == 'p')
          fprintf(stderr, "You have misspelled the command 'grep' as %s\n", cmd);   
       else if(cmd[0]=='e'|| cmd[1]== 'x' || cmd[2] == 'i' || cmd[3] == 't')
          fprintf(stderr, "You have misspelled the command 'exit' as %s\n", cmd); 
       else
          fprintf(stderr, "Invalid Command!\n");
       }             
    else
        fprintf(stderr, "Invalid Command!\n");
    }
/*Waits until all the child process is completed. Once all the child process is terminated, the program exits*/
void terminateProcess()
{
     printf("ok Bye! Waiting for all child to terminate...");
     sleep(10000);
     exit(1);
     }
