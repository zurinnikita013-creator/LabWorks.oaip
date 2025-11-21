namespace labwork28
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
                MultiplyForm form = new MultiplyForm();
                form.ShowDialog();
        }
        private void button2_Click(object sender, EventArgs e)
        {
            BookForm form = new BookForm();
            form.ShowDialog();
        }
    }
}
