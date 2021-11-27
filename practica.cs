using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp4
{
    class Program
    {
        static void Main(string[] args)
        {
            Random rnd = new Random();
            int[][] massiv = new int[4][];
            massiv[0] = new int[3];
            massiv[1] = new int[2];
            massiv[2] = new int[1];
            massiv[3] = new int[2];
            for (int i = 0; i < massiv.Length; i++)
            {
                for (int j = 0; j < massiv[i].Length; j++)
                {
                    massiv[i][j] = rnd.Next(1, 10);
                    Console.Write(massiv[i][j] + " ");
                }
                Console.WriteLine();
            }
            Console.ReadKey();
        }
    }
}