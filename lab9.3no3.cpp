#include <stdio.h>
#include <string.h>

int checkLogin(char *login, char *passwd, char *logindb, char *passdb);

int main() {
    char login_db[5][64] = {"user1", "user2", "user3", "user4", "user5"};
    char password_db[5][64] = {"pass1", "pass2", "pass3", "pass4", "pass5"};
    
    char u_input[64], p_input[64];
    int login_success = 0;

    printf("Enter login : ");
    scanf("%s", u_input);
    printf("Enter password : ");
    scanf("%s", p_input);

    for (int i = 0; i < 5; i++) {
        if (checkLogin(u_input, p_input, login_db[i], password_db[i]) == 1) {
            login_success = 1;
            break;
        }
    }

    if (login_success) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }

    return 0;
}

int checkLogin(char *login, char *passwd, char *logindb, char *passdb) {
    if (strcmp(login, logindb) == 0 && strcmp(passwd, passdb) == 0) {
        return 1;
    }
    return 0;
}
