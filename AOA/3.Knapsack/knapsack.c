#include<stdio.h>
struct knap {
int w;
int p;
float ratio;
};
struct knap items[10];
float temp;
int weight,maxProfit;
    int i,knapW,n,j;
int main() {
    printf("Enter Weight of knapsack: ");
    scanf("%d",&knapW);
    printf("Number of items: ");
    scanf("%d",&n);
    for (i =0;i<n;i++) {
        printf("Enter Profit and weight: ");
        scanf("%d %d",&items[i].p,&items[i].w);
        items[i].ratio =  (float) items[i].p/items[i].w;
    }

    printf("\nEntered Data\n");
    printf("Item\tProfit\tWeight\tPi/Wi\n");
    int id = 1;
for(i=0;i<n;i++) {
    printf("%d\t %d\t %d\t %0.3f\t\n",id,items[i].p,items[i].w,items[i].ratio);
    id++;#include<stdio.h>
struct knap {
int w;
int p;
float ratio;
};
struct knap items[10];
float temp;
int weight,maxProfit;
    int i,knapW,n,j;
int main() {
    printf("Enter Weight of knapsack: ");
    scanf("%d",&knapW);
    printf("Number of items: ");
    scanf("%d",&n);
    for (i =0;i<n;i++) {
        printf("Enter Profit and weight: ");
        scanf("%d %d",&items[i].p,&items[i].w);
        items[i].ratio =  (float) items[i].p/items[i].w;
    }

    printf("\nEntered Data\n");
    printf("Item\tProfit\tWeight\tPi/Wi\n");
    int id = 1;
for(i=0;i<n;i++) {
    printf("%d\t %d\t %d\t %0.3f\t\n",id,items[i].p,items[i].w,items[i].ratio);
    id++;
}
// sort using bubble sort
for(i=0;i<n;i++) {
    for(j=0;j<n-i-1;j++) {
        if(items[j].ratio<items[j+1].ratio) {
            temp = items[j].ratio;
            items[j].ratio = items[j+1].ratio;
            items[j+1].ratio = temp;
        }
    }
}
    printf("\nSorted Data\n");
for(i=0;i<n;i++) {
    printf("%d\t %d\t %d\t %0.3f\t\n",id,items[i].p,items[i].w,items[i].ratio);
    id++;
}
#include<stdio.h>
struct knap {
int w;
int p;
float ratio;
};
struct knap items[10];
float temp;
int weight,maxProfit;
    int i,knapW,n,j;
int main() {
    printf("Enter Weight of knapsack: ");
    scanf("%d",&knapW);
    printf("Number of items: ");
    scanf("%d",&n);
    for (i =0;i<n;i++) {
        printf("Enter Profit and weight: ");
        scanf("%d %d",&items[i].p,&items[i].w);
        items[i].ratio =  (float) items[i].p/items[i].w;
    }

    printf("\nEntered Data\n");
    printf("Item\tProfit\tWeight\tPi/Wi\n");
    int id = 1;
for(i=0;i<n;i++) {
    printf("%d\t %d\t %d\t %0.3f\t\n",id,items[i].p,items[i].w,items[i].ratio);
    id++;
}
// sort using bubble sort
for(i=0;i<n;i++) {
    for(j=0;j<n-i-1;j++) {
        if(items[j].ratio<items[j+1].ratio) {
            temp = items[j].ratio;
            items[j].ratio = items[j+1].ratio;
            items[j+1].ratio = temp;
        }
    }
}
    printf("\nSorted Data\n");
for(i=0;i<n;i++) {
    printf("%d\t %d\t %d\t %0.3f\t\n",id,items[i].p,items[i].w,items[i].ratio);
    id++;
}

// knapsack#include<stdio.h>
struct knap {
int w;
int p;
float ratio;
};
struct knap items[10];
float temp;
int weight,maxProfit;
    int i,knapW,n,j;
int main() {
    printf("Enter Weight of knapsack: ");
    scanf("%d",&knapW);
    printf("Number of items: ");
    scanf("%d",&n);
    for (i =0;i<n;i++) {
        printf("Enter Profit and weight: ");
        scanf("%d %d",&items[i].p,&items[i].w);
        items[i].ratio =  (float) items[i].p/items[i].w;
    }

    printf("\nEntered Data\n");
    printf("Item\tProfit\tWeight\tPi/Wi\n");
    int id = 1;
for(i=0;i<n;i++) {
    printf("%d\t %d\t %d\t %0.3f\t\n",id,items[i].p,items[i].w,items[i].ratio);
    id++;
}
// sort using bubble sort
for(i=0;i<n;i++) {
    for(j=0;j<n-i-1;j++) {
        if(items[j].ratio<items[j+1].ratio) {
            temp = items[j].ratio;
            items[j].ratio = items[j+1].ratio;
            items[j+1].ratio = temp;
        }
    }
}
    printf("\nSorted Data\n");
for(i=0;i<n;i++) {
    printf("%d\t %d\t %d\t %0.3f\t\n",id,items[i].p,items[i].w,items[i].ratio);
    id++;
}

// knapsack algorithm
for(i=0;i<n;i++) {
    weight = 0;
    while(weight<knapW) {
        if(weight + items[i].w <=knapW) {
            weight = weight + items[i].w;
        }
        else {
            items[i].w = (knapW-weight) / items[i].w;
            weight = knapW;
        }
    }
maxProfit += items[i].p;
}
printf("Max profit: %d",maxProfit);
}
 = 0;
    while(weight<knapW) {
        if(weight + items[i].w <=knapW) {
            weight = weight + items[i].w;
        }
        else {
            items[i].w = (knapW-weight) / items[i].w;
            weight = knapW;
        }
    }
maxProfit += items[i].p;
}
printf("Max profit: %d",maxProfit);
}
t = 0;
    while(weight<knapW) {
        if(weight + items[i].w <=knapW) {
            weight = weight + items[i].w;
        }
        else {
            items[i].w = (knapW-weight) / items[i].w;
            weight = knapW;
        }
    }
maxProfit += items[i].p;
}
printf("Max profit: %d",maxProfit);
}

    for(j=0;j<n-i-1;j++) {
        if(items[j].ratio<items[j+1].ratio) {
            temp = items[j].ratio;
            items[j].ratio = items[j+1].ratio;
            items[j+1].ratio = temp;
        }
    }
}
    printf("\nSorted Data\n");
for(i=0;i<n;i++) {
    printf("%d\t %d\t %d\t %0.3f\t\n",id,items[i].p,items[i].w,items[i].ratio);
    id++;
}

// knapsack algorithm
for(i=0;i<n;i++) {
    weight = 0;
    while(weight<knapW) {
        if(weight + items[i].w <=knapW) {
            weight = weight + items[i].w;
        }
        else {
            items[i].w = (knapW-weight) / items[i].w;
            weight = knapW;
        }
    }
maxProfit += items[i].p;
}
printf("Max profit: %d",maxProfit);
}