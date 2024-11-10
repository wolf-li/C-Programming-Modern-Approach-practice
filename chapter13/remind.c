// 为了说明 C 语言字符串函数库的用法，现在来看一个程序。这个程序会显示一个月的每日
// 提醒列表。用户需要输入一系列提醒，每条提醒都要有一个前缀来说明是一个月中的哪一天。
// 当用户输入的是 0 而不是有效的日期时，程序会显示出输入的全部提醒的列表，并按日期排序。
// 下面是与程序的会话示例：
// Enter day and reminder: 24 Susan's birthday
// Enter day and reminder: 5 6:00 - Dinner with Marge and Russ
// Enter day and reminder: 26 Movie - "Chinatown"
// Enter day and reminder: 7 10:30 - Dental appointment
// Enter day and reminder: 12 Movie - "Dazed and Confused"
// Enter day and reminder: 5 Saturday class
// Enter day and reminder: 12 Saturday class
// Enter day and reminder: 0
// Day Reminder
//  5 Saturday class
//  5 6:00 - Dinner with Marge and Russ
//  7 10:30 - Dental appointment
//  12 Saturday class
//  12 Movie - "Dazed and Confused"
//  24 Susan's birthday
//  26 Movie - "Chinatown"

#include<string.h>
#include<stdio.h>

#define MSG_LINE    60
#define MAX_REMIND  50

int read_line(char ch[], int n);

int main(){
    char reminders[MAX_REMIND][MSG_LINE+3];
    char day_str[3];
    char msg_str[MSG_LINE+1];
    int day, i, j, num_remind = 0;

    while (1)
    {
        if(num_remind == MAX_REMIND){
            printf("-- no space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if(day == 0)
            break;

        sprintf(day_str, "%2d",day);
        read_line(msg_str, MSG_LINE);

        for(i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
            {
                break;
            }
        for ( j = num_remind ; j > i; j--)
        {
            strcpy(reminders[j],reminders[j-1]);
        }
        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;    
    }
    printf("\nDay Reminder\n");
    for(i = 0; i < num_remind; i++){
        printf(" %s\n",reminders[i]);
    }

    return 0;
}

int read_line(char str[], int n){
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
    {
        if(i<n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}

 