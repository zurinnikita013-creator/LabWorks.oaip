namespace labwork28
{
    partial class MultiplyForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            MultiplydataGridView = new DataGridView();
            ((System.ComponentModel.ISupportInitialize)MultiplydataGridView).BeginInit();
            SuspendLayout();
            // 
            // MultiplydataGridView
            // 
            MultiplydataGridView.AllowUserToAddRows = false;
            MultiplydataGridView.AllowUserToDeleteRows = false;
            MultiplydataGridView.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.AllCells;
            MultiplydataGridView.BackgroundColor = Color.White;
            MultiplydataGridView.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            MultiplydataGridView.Dock = DockStyle.Fill;
            MultiplydataGridView.Location = new Point(0, 0);
            MultiplydataGridView.Name = "MultiplydataGridView";
            MultiplydataGridView.Size = new Size(734, 447);
            MultiplydataGridView.TabIndex = 0;
            MultiplydataGridView.CellClick += MultiplydataGridView_CellClick_1;
            // 
            // MultiplyForm
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(734, 447);
            Controls.Add(MultiplydataGridView);
            Name = "MultiplyForm";
            Text = "Form1";
            Load += MultiplyForm_Load;
            ((System.ComponentModel.ISupportInitialize)MultiplydataGridView).EndInit();
            ResumeLayout(false);
        }

        #endregion

        private DataGridView MultiplydataGridView;
    }
}