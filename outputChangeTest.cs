using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Text;
using System.Linq;

namespace test
{
    class OutputChange
    {
        static void Main(string[] args)
    {
        var array = new string[2, 5];
        array[0, 0] = "ID";
        array[0, 1] = "Turns";
        array[0, 2] = "Forward Results";
        array[0 ,3]  = "Backward Results";
        array[0, 4] = "Trainings";
        array[1, 0] = "SEL-HYS-001";
        array[1, 1] = "5";
        array[1, 2] = "100%";
        array[1, 3] = "100%";
        array[1, 4] = "1";
     

        using (var sw = new StreamWriter("outputTest.csv"))
        {
            for (int i = 0; i < 1; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    sw.Write(array[i,j] + ",");
                }
                sw.Write("\n");
            }

            sw.Flush();
            sw.Close();
        }
    }
    }
}