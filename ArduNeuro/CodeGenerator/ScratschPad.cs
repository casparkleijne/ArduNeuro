using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CodeGenerator
{
    class ScratschPad
    {
        public ScratschPad()
        {
            String.Join(Environment.NewLine, Enumerable.Range(1, 20).SelectMany(r => String.Join(Environment.NewLine, Enumerable.Range(1, 20).SelectMany(c => $"double N{r};"))));


        }

        static Func<int,string> simplebody = (x) => String.Join(Environment.NewLine, Enumerable.Range(1, x).Select(r => $"double N{r};"));
        static Func<int, string> simpleouter = (x) => String.Join(Environment.NewLine, Enumerable.Range(1, x).Select(r => $"{simplebody(x)}"));
    }
}
