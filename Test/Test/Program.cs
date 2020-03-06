using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Test
{
    class Program
    {
        static void Main(string[] args)
        {
            var array = Enumerable.Range(0, 100000000).OrderBy(i => Guid.NewGuid()).ToArray();

            var isSorted = false;

            Console.WriteLine("Linq OrderByDescending");
            var sw1 = new System.Diagnostics.Stopwatch();
            sw1.Start();

            var sortedArray = array.OrderByDescending(n => n);

            foreach (var num in sortedArray)
            {
                if (!isSorted)
                {
                    sw1.Stop();
                    
                    Console.WriteLine($"　{sw1.ElapsedMilliseconds}ミリ秒");
                    isSorted = true;
                }
                Console.WriteLine(num);
            }

            Console.WriteLine("Array Sort + Reverse");
            var sw2 = new System.Diagnostics.Stopwatch();
            sw2.Start();

            Array.Sort(array);
            Array.Reverse(array);

            sw2.Stop();
            Console.WriteLine($"{sw2.ElapsedMilliseconds}ミリ秒");
        }
    }
}
