using System;
using System.Collections;
using System.Linq;

namespace Name
{
    class Something
    {
        public int counter = 0;
        public string[] Array;
        static void Main(string[] args)
        {
            Array = new string[]{"Left","Right","Straight"};
            if(counter <= Array.Length - 1)
            {
                switch(Array[counter])
                {
                    case "Left":
                    Console.WriteLine(Array[counter]);
                    break;

                    case "Right":
                    Console.WriteLine(Array[counter]);
                    break;

                    case "Straight":
                    Console.WriteLine(Array[counter]);
                    break;


                }


            }
            else if(counter == Array.Length)
            {
                Console.WriteLine(Array[counter]);
            }


        }


    }
}