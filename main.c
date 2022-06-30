#include<stdio.h>
#include<conio.h>

void main()
{
    int a[100], n, i , item, flag=0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    
    // ENTERING THE ELEMENTS OF THE ARRAY
    
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the item to be searched: ");
    scanf("%d", &item);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
        
    }
   
if(flag==1)
    {
    printf("Item found!\nIndex is %d", i);
    
    }
else
    {
    printf("Item not found");
    }
    }

 
 
 
 
 
 
