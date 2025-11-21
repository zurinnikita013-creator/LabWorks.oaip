using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace labwork28
{
    public partial class BookForm : Form
    {
        private List<Book> books = new List<Book>();
        public BookForm()
        {
            InitializeComponent();
        }
        private void BookForm_Load(object sender, EventArgs e)
        {
            FillBooksList();
            ConfigureDataGridView();
            BlindDataToGrid();
        }
        private void FillBooksList()
        {
            books.Add(new Book("Книга 1","Автор 1","Цена 1"));
            books.Add(new Book("Книга 2", "Автор 2", "Цена 2"));
            books.Add(new Book("Книга 3", "Автор 3", "Цена 3"));
            books.Add(new Book("Книга 4", "Автор 4", "Цена 4"));
            books.Add(new Book("Книга 5", "Автор 5", "Цена 5"));
        }
        private void ConfigureDataGridView()
        {
            dataGridView.AutoGenerateColumns = true;
            dataGridView.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
        }
        private void BlindDataToGrid()
        {
            dataGridView.DataSource = null;
            dataGridView.DataSource= books;
            dataGridView.Columns["BookName"].HeaderText = "Книга";
            dataGridView.Columns["Author"].HeaderText = "Автор";
            dataGridView.Columns["Price"].HeaderText = "Цена";
        }
    }
}
