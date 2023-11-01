#include <stdio.h>
int main()
{
    int n = 6, i, sum, t = 0, j, f = 0, kk, v1, v2, u, i1;
    int a[] = {1, 2, 3, 4, 5, 6};
    // printf("%d",a[1]);
    printf("\n enter sum...");
    scanf("%d", &sum);

    // for(i=0;i<n;i++){
    //     for(j=0;j<n;j++){
    //         if(sum!=t){
    //            t=a[i]+a[i+1];
    //            kk=t;
    //            if(t==sum){
    //            printf("%d %d",i,i+1);
    //            v1=i;
    //            v2=i+1;

    //            if(kk<sum){
    //             printf("%d",t);
    //             for(u=0;u<n;u++){
    //             if(kk<sum){
    //                 t= kk+a[v2+1];
    //            printf("%d %d ",i,v2+1);
    //            f=1;
    //            break;
    //            }
    //            }
    //            }
    //            }

    //            }

    //             // if(sum>t){
    //             //     i=i+1;
    //             //     if(t==sum){
    //             //         f=1;
    //             //         break;
    //             //     }
    //             // }

    //           if(f==1){
    //             break;
    //           }
    //     }
    //             if(f==1){
    //                 break;
    //             }

    // }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (sum > 0)
            {
                t = a[i] + a[i + 1];
                i1 = i;
                if (t == sum)
                {
                    printf("%d %d ", i, i + 1);
                    f = 1;

                   if (t < sum)
                    {
                        t = a[i1 + 1];
                        printf("%d %d ", i, i1 + 1);

                        break;
                    }
                }
            }
                if (f == 1)
                    break;
        }

            if (f == 1)
                break;
        }
    
        return 0;
    }