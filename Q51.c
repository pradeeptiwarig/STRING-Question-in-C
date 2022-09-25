// SALTING
// Find the salted form of a password entered enteredby user if the salt is "123" & added at the end.

# include <stdio.h>
# include <strings.h>
int main() 
{
    void salting(char password[]);
    char password[100];
    // char salting[] = "123";
    scanf("%s", password);
    salting(password);
    // strcat(password, salting);
    // puts(password);
    return 0;
}

void salting(char password[]){
    char salt[] = "123";
    char newPass[200];
    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);


}