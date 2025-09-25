# Report on Time Complexity Demonstration using C++  

### Introduction  
In algorithm analysis, the *time complexity* of an algorithm is a measure that expresses the runtime of the algorithm as a function of the input size $$n$$. It provides a way to describe the efficiency of an algorithm without depending on machine-specific details. Common complexities include **constant time $$O(1)$$**, **linear time $$O(n)$$**, and **quadratic time $$O(n^2)$$**.  

This report demonstrates these three complexities using a C++ program that executes different functions on arrays of increasing sizes. The program outputs the number of operations performed for each complexity class and validates theoretical expectations with practical observation.

***

### Algorithm Explanation  

1. **Constant Time $$O(1)$$**  
    ```cpp
    int constantTimeExample(int arr[]) {
        return arr[0];
    }
    ```
    - This function directly accesses the first element of the array, independent of the size of the array.  
    - Number of operations: always **1** (constant).  

2. **Linear Time $$O(n)$$**  
    ```cpp
    int linearTimeExample(int arr[], int size) {
        int total = 0;
        for (int i = 0; i < size; i++) {
            total++;
        }
        return total;
    }
    ```
    - This function iterates once through all elements of an array.  
    - Number of operations grows proportionally to the array size.  

3. **Quadratic Time $$O(n^2)$$**  
    ```cpp
    int quadraticTimeExample(int arr[], int size) {
        int total = 0;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                total++;
            }
        }
        return total;
    }
    ```
    - This function contains two nested loops, each running $$n$$ times.  
    - Number of operations grows proportionally to the square of the input size.  

***

### Output Table  

| Size | O(1) Ops | O(n) Ops | O(n²) Ops |
|------|----------|----------|------------|
| 100  | 0        | 100      | 10,000     |
| 200  | 0        | 200      | 40,000     |
| 400  | 0        | 400      | 160,000    |
| 800  | 0        | 800      | 640,000    |
| 1600 | 0        | 1600     | 2,560,000  |

***

### Analysis of Results  

- For **O(1)** operations, the value remains the same regardless of array size, confirming constant complexity. The program outputs `0` since the first array element is initialized to 0.  
- For **O(n)** operations, the number of iterations scales linearly with the input size, doubling as $$n$$ doubles.  
- For **O(n²)** operations, the number of iterations grows quadratically. Doubling $$n$$ results in nearly **four times the number of operations**, which is consistent with quadratic growth.  

***

This visual alongside the earlier report gives a clear understanding of algorithm efficiency and scalability.

![Time Complexity Growth](https://ppl-ai-code-interpreter-files.s3.amazonaws.com/web/direct-files/2035df3977aa31f2a4aac9a3edfacc1b/0c2b52a9-25cc-4fbd-898a-8ca22a263b01/26937847.png

### Conclusion  

This experiment successfully demonstrates the practical behavior of:  
- **O(1):** Independent of input size, constant operations.  
- **O(n):** Linear increase in operations with input size.  
- **O(n²):** Rapid quadratic growth as input size increases.  

The report highlights how algorithm efficiency significantly impacts performance as data size grows. Algorithms with higher complexities such as $$O(n^2)$$ quickly become computationally expensive for large inputs, whereas constant and linear operations are much more scalable.  

***
