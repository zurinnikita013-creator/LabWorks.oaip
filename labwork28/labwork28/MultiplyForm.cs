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
    public partial class MultiplyForm : Form
    {
        public MultiplyForm()
        {
            InitializeComponent();
        }
        private void MultiplyForm_Load(object sender, EventArgs e)
        {
            MultiplydataGridView.ColumnCount = 10;
            MultiplydataGridView.RowCount = 10;
            for (int i = 0; i < 10; i++)
            {
                MultiplydataGridView.Columns[i].HeaderText = (i + 1).ToString();
            }
            for (int i = 0; i < 10; i++)
            {
                MultiplydataGridView.Rows[i].HeaderCell.Value = (i + 1).ToString();
            }
            for (int row = 0; row < 10; row++)
            {
                for (int col = 0; col < 10; col++)
                {
                    int result = (col + 1) * (row + 1);
                    MultiplydataGridView.Rows[row].Cells[col].Value = result;
                }
            }
        }
        private void MultiplydataGridView_CellClick_1(object sender, DataGridViewCellEventArgs e)
        {
            if (e.RowIndex >= 0 && e.ColumnIndex >= 0)
            {
                int first = e.ColumnIndex + 1;
                int second = e.RowIndex + 1;
                int result = first * second;
                MessageBox.Show($"{first}*{second}={result}");
            }
        }
    }
}
