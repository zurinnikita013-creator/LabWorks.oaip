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
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
        }
        private void Form3_Load(object sender, EventArgs e)
        {
            ConfigureDataGridView();
            FillProduct();
        }
        private void ConfigureDataGridView()
        {
            dataGridView1.Columns["Код"].Visible = false;
            dataGridView1.AlternatingRowsDefaultCellStyle.BackColor=Color.LightGray;
            dataGridView1.Columns["Цена"].DefaultCellStyle.Format = "C2";
            dataGridView1.Columns["Цена"].DefaultCellStyle.Alignment = DataGridViewContentAligment.MiddleRight;
        }
    }
}
