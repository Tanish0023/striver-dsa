#include "bits/stdc++.h"
using namespace std;

// https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa

// Pattern - 1
// ****
// ****
// ****
// ****

/* int main() {
    int number;

    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}
*/

// Pattern - 2
// *
// **
// ***
// ****

/* int main() {
    int number;

    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}*/

// Pattern - 3
// 1
// 1 2
// 1 2 3
// 1 2 3 4

/* int main() {
    int number;

    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }

}*/

// Pattern - 4
// 1
// 2 2
// 3 3 3
// 4 4 4 4

/* int main() {
    int number;

    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << i+1 << " ";
        }
        cout << endl;
    }

}*/

// Pattern - 5
// ****
// ***
// **
// *

/* int main() {
    int number;

    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = number - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

}*/

// Pattern - 6
// 1234
// 123
// 12
// 1

/*int main() {
    int number;

    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = 1; j < number + 1 - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

}*/

// Pattern - 7
//    *
//   ***
//  *****
// *******

/* int main() {
    int number;

    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int s = 0; s < number - i - 1; s++) {
            cout << " ";
        }

        for (int j = 0; j < i * 2 + 1; j++) {
            cout << "*";
        }


        cout << endl;
    }

}*/

// Pattern - 8
// *******
//  *****
//   ***
//    *

/* int main() {
    int number;

    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int s = 0; s < i; s++) {
            cout << " ";
        }

        for (int j = 0; j < (number - i) * 2 - 1; j++) {
            cout << "*";
        }


        cout << endl;
    }

}*/

// Pattern - 9 -> Combine Pattern 7 and 8
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

// Pattern - 10
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

/* int main()
{
    int number;

    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < number - 1; i++)
    {
        for (int j = number - i - 1; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}*/

// Pattern - 11
// 1
// 01
// 101
// 0101
// 10101

/* int main()
{
    int number;

    cin >> number;

    int start = 1;
    for (int i = 0; i < number; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
}*/

// Pattern - 12
// 1      1
// 12    21
// 123  321
// 12344321

/* int main()
{
    int number;

    cin >> number;

    int start = 1;
    for (int i = 0; i < number; i++)
    {
        // Start
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        // Space (n*2) - ((i+1)*2)
        for (int j = 0; j < (number*2) - ((i+1)*2); j++)
        {
            cout << " ";
        }

        // End
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}*/

// Pattern - 13
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

/* int main()
{
    int number;

    cin >> number;

    int start = 1;
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << start << " ";
            start += 1;
        }

        cout << endl;
    }
}*/

// Pattern - 14
// A
// A B
// A B C
// A B C D
// A B C D E

/* int main()
{
    int number;

    cin >> number;

    int start = 1;
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << char('A' + j) << " ";
        }

        cout << endl;
    }
}*/

// Pattern - 15
// A B C D E
// A B C D
// A B C
// A B
// A

/* int main()
{
    int number;

    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number - i; j++)
        {
            cout << char('A' + j) << " ";
        }

        cout << endl;
    }
}*/

// Pattern - 16
// A
// B B
// C C C
// D D D D
// E E E E E

/* int main()
{
    int number;

    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << char('A' + i) << " ";
        }

        cout << endl;
    }
}*/

// Pattern - 17
//    A
//   ABA
//  ABCBA
// ABCDCBA

/* int main()
{
    int number;

    cin >> number;

    for (int i = 0; i < number; i++)
    {
        // Space
        for (int j = 0; j < number - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << char('A' + j);
        }

        for (int j = i; j > 0; j--)
        {
            cout << char('A' + j - 1);
        }

        cout << endl;
    }
}*/

// Pattern - 18
// E
// D E
// C D E
// B C D E
// A B C D E

/* int main()
{
    int number;

    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << char('A' + (number - i) + j - 1) << " ";
        }

        cout << endl;
    }
}*/

// Pattern - 19
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// **      **
// ***    ***
// ****  ****
// **********

/*int main()
{
    int number;
    cin >> number;

    // ✅ Upper Half
    for (int i = number; i >= 1; i--)
    {
        // Left stars
        for (int j = 0; j < i; j++)
            cout << "*";

        // Spaces
        for (int j = 0; j < (number - i) * 2; j++)
            cout << " ";

        // Right stars
        for (int j = 0; j < i; j++)
            cout << "*";

        cout << endl;
    }

    // ✅ Lower Half
    for (int i = 2; i <= number; i++)
    {
        // Left stars
        for (int j = 0; j < i; j++)
            cout << "*";

        // Spaces
        for (int j = 0; j < (number - i) * 2; j++)
            cout << " ";

        // Right stars
        for (int j = 0; j < i; j++)
            cout << "*";

        cout << endl;
    }
}*/

// Pattern - 20
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

/* int main()
{
    int number;
    cin >> number;

    // ✅ Upper Half
    for (int i = 1; i <= number; i++)
    {
        // Left stars
        for (int j = 0; j < i; j++)
            cout << "*";

        // Spaces
        for (int j = 0; j < (number - i) * 2; j++)
            cout << " ";

        // Right stars
        for (int j = 0; j < i; j++)
            cout << "*";

        cout << endl;
    }

    // ✅ Lower Half
    for (int i = number - 1; i >= 0; i--)
    {
        // Left stars
        for (int j = 0; j < i; j++)
            cout << "*";

        // Spaces
        for (int j = 0; j < (number - i) * 2; j++)
            cout << " ";

        // Right stars
        for (int j = 0; j < i; j++)
            cout << "*";

        cout << endl;
    }
}*/

// Pattern - 21
// *****
// *   *
// *   *
// *   *
// *****

/* int main()
{
    int number;
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            if(i == 0 || j == 0 || i == number - 1 || j == number - 1){
                cout << "*";
            }else{
                cout << " ";
            }
        }

        cout << endl;
    }
}*/

// Pattern - 22
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

/*int main()
{
    int number;
    cin >> number;

    int n = 2 * number - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int top = i;
            int left = j;
            int right = n - 1 - j;
            int down = n - 1 - i;

            cout << (number - min(min(top, down), min(right, left)));
        }

        cout << endl;
    }
}*/
