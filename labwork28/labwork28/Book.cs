using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace labwork28
{
    public class Book
    {
        public string Bookname {  get; set; }
        public string Author {  get; set; }
        public string Price { get; set; }
        public Book() { }
        public Book(string bookname, string author, string price)
        {
            Bookname = bookname;
            Author = author;
            Price = price;
        }
    }
}
