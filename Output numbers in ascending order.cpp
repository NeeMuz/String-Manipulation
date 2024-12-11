using System;
class Program
{
    static void Main()
    {
        int A = 2;
        int B = 9;

        for (int i = A; i <= B; i++)
        {
            for (int j = 0; j < i; j++)
            {
                Console.Write(i + " ");
            }
        }
        Console.WriteLine();
        Console.ReadLine();
    }
}
