//Print prime numbers in the given range 1 to n.

#include <stdio.h>

int main()
{
    int n = 10;          // 1️⃣ Range ka end
    int num, i;          // 2️⃣ Loop variables
    int count;           // 3️⃣ Divisor count ke liye

    for (num = 2; num <= n; num++)   // 4️⃣ Outer loop: number select
    {
        count = 0;                   // 5️⃣ Har number ke liye reset

        for (i = 1; i <= num; i++)   // 6️⃣ Inner loop: divisor check
        {
            if (num % i == 0)        // 7️⃣ Divisible hai ya nahi
            {
                count++;             // 8️⃣ Divisor mila
            }
        }

        if (count == 2)              // 9️⃣ Prime check
        {
            printf("%d ", num);      // 🔟 Prime number print
        }
    }

    return 0;                         // 1️⃣1️⃣ Program end
}
