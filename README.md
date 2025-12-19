# Wangui_John_Njenga_StructuredProgramming.
#1. Normal Variable vs Pointer                                                                                   A normal variable stores the actual value directly in memory, while a pointer stores the memory address of another variable. A normal variable is accessed and modified directly, whereas a pointer accesses and modifies the value indirectly using dereferencing (*).

#2. Variable vs Pointer Declaration and Definition

 Declaring a normal variable tells the compiler the type exists, and defining it allocates memory and assigns a value. Declaring a pointer tells the compiler it will store an address of a certain type, and defining it assigns the address of a variable. The & operator gives the address of a variable, and the * operator accesses the value at that address.
EXAMPLE:
int a;      // Declaration of normal variable
a = 5;      // Definition

int *ptr;   // Declaration of pointer
ptr = &a;   // Definition

#3. Dereferencing a Pointer

Dereferencing a pointer means accessing or modifying the value stored at the memory address it holds.
EXAMPLE:
int x = 50;
int *p = &x;
printf("%d\n", *p); // Access value: 50
*p = 100;           // Modify value via pointer
printf("%d\n", x);  // Output: 100

#4. Use Cases Where Pointers Are Preferred

 Pointers are preferred for dynamic memory allocation, passing large data without copying, and building data structures like linked lists.
EXAMPLE:
int *arr = malloc(5*sizeof(int));
arr[0] = 10;
free(arr);

void modify(int *a) { *a = 99; }
int x = 0;
modify(&x);

#5. Limitations and Risks of Pointers

 Pointers can be risky because they may point to freed memory, cause memory leaks, or lead to undefined behavior. They are also harder to manage and debug.

#6. Call by Value vs Call by Reference

  Call by value copies the variable into the function, so the original remains unchanged. Call by reference passes the address, so the original variable is modified.

// Call by value
void val(int a) { a = 100; }
int x = 50;
val(x);  // x remains 50

// Call by reference
void ref(int *a) { *a = 100; }
int y = 50;
ref(&y); // y becomes 100

#7. When to Use Call by Value vs Call by Reference

 Call by value is preferred for small data types and when the original should not change. Call by reference is preferred for large data structures or when the function needs to modify the original variable.
