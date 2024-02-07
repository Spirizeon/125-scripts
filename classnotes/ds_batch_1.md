# Data structure 
+ techniques of organising data  
+ aim for efficient data access

---

## Types of DS
+ Linear
    + Arrays
    + Stacks
    + Queues
+ Non-linear 
    + Graphs
    + Trees

---

## performance
Asymptotic analysis

---

## Advantages 
+ Efficiency of program
+ Reusability: Reuse DS anywhere in the program
+ Abstraction: Superset of blackboxing

---

## Stack in Recursion of factorial

```

#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}

```

---

## Stack in Recursion of factorial 

+ Call and calculate
+ Leave result in stack (PUSH)
+ `5*multiplyNumbers(5-1)` 
> multiplyNumbers(4) = unknown
+ Once `return 1`, calculate all multiplyNumbers(n-1) values
+ Unwind each stack and remove (POP) 

---



# Absract data type
+ prototype of blue print (like struct or union)

### advantages
+ Encapsulation: make them compact packets
+ Abstraction: blackbox complication
+ Info hiding: 
    + control authorisation of access to data 
    + (public and private variables)

+ Approaches to represent an alogrithm
    + Visual approaches
        + FSM diagram 
        + UML diagram
        + Flowcharts
    + Alogrithm header
        + List parameters, 
        + describe preconditions
            + REQ for parameters
        + post conditions
            + Status of output, etc
 
        + Purpose
        + Condition
       
### Properties
+ Finiteness: terminate after a number of steps
+ Definiteness: Explain what each step done (comments)
+ Effectiveness: Must be able to be written down in pencil
    + Complexity 
+ IO: 

### Lab
Passing an array of structures/passing a structure (call by referece)

function:
```
function_name(struct template* structure_name){

}
```
main:
```
function_name(&<structure_name>);
function_name(<array_of_structure>);
```
# time complexity
    + empirical approach
    + theoretical approach

# theoretical testing
CN^2 + CN + C <= CN^2
= O(n^2) 
C: constant
N: size of code

Big O calculates highest term (upper bound)
Big omega gives loweest term
Big theta gives both upper and lower terms

# Stacks
+ Follows LIFO order
+ Operation: PUSH -> add an element to top
+ Operation: POP -> remove an element from pop
+ Check: isEmpty/isFull -> check if stack capacity is empty or full

### Stack implementations
+ Arrays (fixed sized lists)
+ Linkedin lists (self-referential pointers and structs)


### Stack blueprint
+ isFull function
```c 
#include <stdio.h> 
void isFull(int * array){
    //this function checks if capacity is full
        if(array[2] == 0){
            return 0; //array still has space
        }
        else{
            return 1; //array is full
        }
    }
}

```
+ isEmpty function

```c
void isEmpty(int * array){
    //this function checks if capacity is full
        if(array[2] == 0){
            return 0; //array still has space
        }
        else{
            return 1; //array is full
        }
    }
}

```

+ push function

```c
void push(int * array){
    if(isFull(array) == 0){
    //array needs to be not empty
        int num;
        printf("enter element: ");
        scanf("%d\n",&num);

        //element entering...

        if(array[2]==0){
            array[i] == num;
            //replace null element with new element
            printf("element pushed!");
        }
    }
    else{
            //show error message
            printf("array is full!")
        }


}

```
+ pop function

```

void pop(int * array){
    if(isFull(array)==0){

        for(int i=0;i<=2;i++){
            if(array[i] == 0){
                //search for null element
                //replace non null element
                array[i-1] = 0;             
                printf("element has been popped!")
            }
        }
    }
}
```
+ main function

```c
int main(){
    int array[4];
    push(array);
    pop(array);
    return 0;
}


```

###
