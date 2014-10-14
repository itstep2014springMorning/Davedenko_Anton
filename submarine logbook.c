#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <string.h>
#include <locale.h>

int nrecords;

void numStrings()
{
    char array[401];
    FILE *in;
    in=fopen("x.txt","r");
    if (in == NULL)
    {
        perror("Error opening file x.txt\n");
    }
    else
    {
        while (!feof(in))
        {

            if (fgets(array, 400, in) != NULL)
            {
                nrecords++;
            }
        }
    }
    fclose(in);
}


void showJournal()
{
    printf("--------------------------\n");
    printf("   Logbook:\n");
    printf("--------------------------\n");
    int count=2;
    int t=1;
    char array[401];
    FILE *in;
    in=fopen("x.txt","r");
    if (in == NULL)
    {
        perror("Error opening file x.txt\n");
    }
    else
    {
        while (!feof(in))
        {
            if (fgets(array, 400, in) != NULL)
            {
                count++;
                        if(count%3==0){
                printf("%d.",t);
                t++;
                }
                printf(" %s",array);
            }
            else
            {
                if(count==0)
                {
                    printf("\n   No records\n");
                }
            }
        }
    }
    fclose(in);
}


void addMessage ()
{
    nrecords+=3;
    printf("--------------------------\n");
    printf("   New record:\n");
    printf("--------------------------\n");
    FILE *in;
    char array[401];
    fgets (array,400,stdin);
    time_t timer = time(NULL);
    in = fopen ("x.txt","a");
    fprintf (in, "%s   %s\n",ctime(&timer),array);
    fclose (in);
}


void deleteMessage()
{
    FILE *in;
    FILE *tmp;
    int delit;
    int count=1,nums;
    printf("--------------------------\n");
    printf("   Delete message:\n");
    printf("--------------------------\n");
    printf("Enter number of message: ");
    scanf("%d",&delit);
    delit=delit-1;
    char array[401];
    char arrayTmp1[401];
    char arrayTmp2[401];
    in=fopen("x.txt","r");
    tmp=fopen("temp.txt","w");
    if (in == NULL)
    {
        perror("Error opening file x.txt\n");
    }
    else
    {
        while (!feof(in))
        {
            if (fgets(array, 400, in) != NULL)
            {
                    count++;
                }
                if(delit!=count/3){
                    fprintf (tmp, "%s",array);
                }
            }
        }
        fclose(in);
        fclose(tmp);

        in=fopen("x.txt","w");
    tmp=fopen("temp.txt","r");
        if (tmp == NULL)
    {
        perror("Error opening file temp.txt\n");
    }
    else
    {
        while (!feof(tmp))
        {
            if (fgets(array, 400, tmp) != NULL)
            {

                    fprintf (in, "%s",array);
                }
            }
        }
    fclose(tmp);
    fclose(in);
    printf(" %d message is deleted\n",delit);
}


int main()
{
    numStrings();
    FILE *in;
    in=fopen("x.txt","r");
    char array[200];
    if (in == NULL) perror("Error opening file");
    setlocale( LC_ALL, "rus" );
    while(1)
    {
        printf("\n--------------------------\n");
        printf("1. Show logbook\n2. Add message\n3. Delete message\n0. Exit\n\nEnter value from 0 to 3\n");
        char choice[100];
        fgets(choice, 99, stdin);
        int ch;
        ch = -1;
        sscanf(choice, "%d", &ch);
        switch(ch)
        {
        case 0:
            return 0;
        case 1:
            showJournal();
            break;
        case 2:
            addMessage ();
            break;
        case 3:
            deleteMessage();
            break;
        }
    }
    return 0;
}
