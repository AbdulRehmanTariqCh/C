/*Write a program that will display the kilometers driven, liters used, and
consumption (in litres/100km) for each tankful. After processing all the input information, the
program should calculate the overall average consumption: (Hint The liters/100km is (Liters/KM
driven) x 100)
Enter the liters used (-1 to end): 57.6
Enter the kilometers driven: 459
The liters/100km for this tank was 12.5
Enter the liters used (-1 to end): 45.3
Enter the kilometers driven: 320
The liters/100km for this tank was 14.2
Enter the liters used (-1 to end): -1
The overall average consumption was: 13.4
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float liters,km;
    do{
        printf("Enter the liters used (-1 to end): ");
        scanf("%f",&liters);
        if(liters==-1)
            exit(0);
        printf("Enter the kilometers driven: ");
        scanf("%f",&km);
        printf("The liters/100 for this tank was %.1f\n",(liters*100)/km);
    }while(liters!=-1);

    system("pause");
    return 0;
}
