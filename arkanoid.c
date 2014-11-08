Davedenko_Anton
===============
# include <stdio.h>
# include <string.h>
# include <math.h>
# include <time.h>
# include <ctime>
# include <iostream>

using namespace std;

const int height = 50;
const int width = 70;

double circle(int y, int x, int radius, char buffer[height][width + 3])
{
    double alpha;
    for (alpha = 0; alpha < 6.29; alpha += 0.01)
    {
        int i = round(radius*sin(alpha)) + y;
        int j = round(radius*cos(alpha)) + x;
        if (((i >= 0) && (j >= 0)) && ((i<height) && (j<width)))
        {
            buffer[i][j] = '*';
        }
    }
    return 0;
}

int main()
{
    int count=0;
    int radius=2;
    int y=25,x=30;
    int ychek=25,xchek=30;
    int m=1,b=1;
    int speed=10000000;
    //clock_t start, end;
    //start = clock();
    //end = clock();
    char buffer[height][width + 3];

    // start
    while((y!=radius)||(x!=width-3))
    {
        for(int i=0; i<speed; i++)
        {
            count=i;
        }
        for (int i = 0; i < height; i++)
        {
            memset(buffer[i], ' ', width); // устанавливаем пробелы
            strcpy(buffer[i] + width, "|\n"); // устанавливаем символы после пробелов
        }
        circle(y, x, radius, buffer);
        y-=m;
        x+=b;
        for (int i = 0; i < height; i++)
        {
            printf("%s", buffer[i]);
        }
        if((y==radius)||(x==width-3))
        {
            break;
        }
    }

    while(1)/// infinite loop
    {

        ///y=0 right
        if((y==radius)&&(x>xchek))
        {
            ychek=y;
            xchek=x;
            while(1)
            {
                for(int i=0; i<speed; i++)
                {
                    count=i;
                }
                for (int i = 0; i < height; i++)
                {
                    memset(buffer[i], ' ', width); // устанавливаем пробелы
                    strcpy(buffer[i] + width, "|\n"); // устанавливаем символы после пробелов
                }
                y+=m;
                x+=b;
                circle(y, x, radius, buffer);
                for (int i = 0; i < height; i++)
                {
                    printf("%s", buffer[i]);
                }
                if((y==height-radius)||(x==width-3))
                {
                    break;
                }
            }
        }

        ///y=0 left
        if((y==radius)&&(x<xchek))
        {
            ychek=y;
            xchek=x;
            while(1)
            {
                for(int i=0; i<speed; i++)
                {
                    count=i;
                }
                for (int i = 0; i < height; i++)
                {
                    memset(buffer[i], ' ', width); // устанавливаем пробелы
                    strcpy(buffer[i] + width, "|\n"); // устанавливаем символы после пробелов
                }
                y+=m;
                x-=b;
                circle(y, x, radius, buffer);
                for (int i = 0; i < height; i++)
                {
                    printf("%s", buffer[i]);
                }
                if((y==height-radius)||(x==radius))
                {
                    break;
                }
            }
        }

        /// x=width down
        if((x==width-3)&&(y>ychek))
        {
            ychek=y;
            xchek=x;
            while(1)
            {

                for(int i=0; i<speed; i++)
                {
                    count=i;
                }
                for (int i = 0; i < height; i++)
                {
                    memset(buffer[i], ' ', width); // устанавливаем пробелы
                    strcpy(buffer[i] + width, "|\n"); // устанавливаем символы после пробелов
                }
                circle(y, x, radius, buffer);
                y+=m;
                x-=b;
                for (int i = 0; i < height; i++)
                {
                    printf("%s", buffer[i]);
                }
                if(y==height-radius)
                {
                    break;
                }
            }
        }

        /// x=width up
        if((x==width-3)&&(y<ychek))
        {
            ychek=y;
            xchek=x;
            while(1)
            {
                for(int i=0; i<speed; i++)
                {
                    count=i;
                }
                for (int i = 0; i < height; i++)
                {
                    memset(buffer[i], ' ', width); // устанавливаем пробелы
                    strcpy(buffer[i] + width, "|\n"); // устанавливаем символы после пробелов
                }
                circle(y, x, radius, buffer);
                y-=m;
                x-=b;
                for (int i = 0; i < height; i++)
                {
                    printf("%s", buffer[i]);
                }
                if((y==radius)||(x==radius))
                {
                    break;
                }
            }
        }

        ///y=height left
        if((y==height-radius)&&(x<xchek))
        {
            ychek=y;
            xchek=x;
            while(1)
            {
                for(int i=0; i<speed; i++)
                {
                    count=i;
                }
                for (int i = 0; i < height; i++)
                {
                    memset(buffer[i], ' ', width); // устанавливаем пробелы
                    strcpy(buffer[i] + width, "|\n"); // устанавливаем символы после пробелов
                }
                y-=m;
                x-=b;
                circle(y, x, radius, buffer);
                for (int i = 0; i < height; i++)
                {
                    printf("%s", buffer[i]);
                }
                if((x==radius)||(y==radius))
                {
                    break;
                }
            }
        }

        ///y=height right
        if((y==height-radius)&&(x>xchek))
        {
            ychek=y;
            xchek=x;
            while(1)
            {
                for(int i=0; i<speed; i++)
                {
                    count=i;
                }
                for (int i = 0; i < height; i++)
                {
                    memset(buffer[i], ' ', width); // устанавливаем пробелы
                    strcpy(buffer[i] + width, "|\n"); // устанавливаем символы после пробелов
                }
                y-=m;
                x+=b;
                circle(y, x, radius, buffer);
                for (int i = 0; i < height; i++)
                {
                    printf("%s", buffer[i]);
                }
                if((x==width-3)||(y==radius))
                {
                    break;
                }
            }
        }

        ///x=0 up
        if((x==radius)&&(y<ychek))
        {
            ychek=y;
            xchek=x;
            while(1)
            {
                for(int i=0; i<speed; i++)
                {
                    count=i;
                }
                for (int i = 0; i < height; i++)
                {
                    memset(buffer[i], ' ', width); // устанавливаем пробелы
                    strcpy(buffer[i] + width, "|\n"); // устанавливаем символы после пробелов
                }
                y-=m;
                x+=b;
                circle(y, x, radius, buffer);
                for (int i = 0; i < height; i++)
                {
                    printf("%s", buffer[i]);
                }
                if((x==radius)||(y==radius))
                {
                    break;
                }
            }
        }

        ///x=0 down
        if((x==radius)&&(y>ychek))
        {
            ychek=y;
            xchek=x;
            while(1)
            {
                for(int i=0; i<speed; i++)
                {
                    count=i;
                }
                for (int i = 0; i < height; i++)
                {
                    memset(buffer[i], ' ', width); // устанавливаем пробелы
                    strcpy(buffer[i] + width, "|\n"); // устанавливаем символы после пробелов
                }
                y+=m;
                x+=b;
                circle(y, x, radius, buffer);
                for (int i = 0; i < height; i++)
                {
                    printf("%s", buffer[i]);
                }
                if((x==width-3)||(y==height-radius))
                {
                    break;
                }
            }
        }
    }
    return 0;
}
