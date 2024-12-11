using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Enter a string:");
        string input = Console.ReadLine();

        if (input != null && input != "")
        {
            bool isPalindrome = true;
            for (int i = 0; i < input.Length / 2; i++)
            {
                if (input[i] != input[input.Length - 1 - i])
                {
                    isPalindrome = false;
                    break;
                }
            }

            if (isPalindrome)
            {
                Console.WriteLine("It is a palindrome!");
            }
            else
            {
                Console.WriteLine("It is not a palindrome.");
            }
        }

        Console.ReadLine();
    }
}
