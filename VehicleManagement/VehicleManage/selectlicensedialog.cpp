#include "selectlicensedialog.h"
#include "ui_selectlicensedialog.h"
#include <QMessageBox>

SelectLicenseDialog::SelectLicenseDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::SelectLicenseDialog)
{
    ui->setupUi(this);

	m_nCountNextLeft = 4;
	m_qstrLicenseSelected = "";

	ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/anotheroff.png)");
	ui->pBtnNext->setEnabled(false);
	ui->pBtnConfirm->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/confirmoff.png)");
	ui->pBtnConfirm->setEnabled(false);

	for (int i = 0; i < LICENSECOUNT; i++)
	{
		m_qstrBtnList[i] = new QPushButton("", this);
		connect(m_qstrBtnList[i], SIGNAL(clicked()), this, SLOT(onLicenseSelectedSlot()));
		m_qstrBtnList[i]->setStyleSheet("color:rgb(255,255,255);border:2px groove gray; border-radius:10px; padding:2px 2px;background-color: rgb(0, 0, 255); ");
		m_qstrBtnList[i]->setFont(QFont("宋体", 36));
		m_qstrBtnList[i]->setEnabled(false);
		// 每个按钮宽160，高70，按钮之间左右相隔30，上下间隔10，第一个按钮坐上角坐标（50,240）
		int x = 50 + (i % 5) * (160 + 30);
		int y = 290 + (i / 5) * (70 + 10);
		m_qstrBtnList[i]->setGeometry(x, y, 160, 70);
	}

	connect(ui->pBtnNext, SIGNAL(clicked()), this, SLOT(onBtnNextClicked()));
}

SelectLicenseDialog::~SelectLicenseDialog()
{
    delete ui;
}

void SelectLicenseDialog::on_pBtnHomepage_clicked()
{
    // 回到主页
    //this->close();
	m_pTimer->stop();
	emit goHomeSignal();
}

void SelectLicenseDialog::on_pBtnConfirm_clicked()
{
	m_pTimer->stop();
    emit selectDoneSingal();
    //this->close();
}

void SelectLicenseDialog::startTimer(int nMillisecond)
{
	ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nextoff.png)");
	ui->pBtnNext->setEnabled(false);
	ui->pBtnConfirm->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/confirmoff.png)");
	ui->pBtnConfirm->setEnabled(false);

	for (int i = 0; i < LICENSECOUNT; i++)
	{
		m_qstrBtnList[i]->setStyleSheet("color:rgb(255,255,255);border:2px groove gray; border-radius:10px; padding:2px 2px;background-color: rgb(0, 0, 255); ");
		m_qstrBtnList[i]->setEnabled(false);
	}
	// 定时关闭
	if (nMillisecond > 0)
	{
		m_pTimer->start(nMillisecond);
		// 获取随机车牌，每次20个，
		if (1)
		{
			//设置车牌
			QString qstrLicenseList[20] = {"A321AF", "Y453D3", "B45SFG", "C1132B", "DSF434", "EHTRY4", "F4344F", "G4323V", "FFSD34", "B34VVE", 
				"G423GD", "ASDFG4", "A27698", "H75674", "H23445", "GSD455", "B578GF", "C2324F", "D5467B", "D53645"};
			for (int i = 0; i < LICENSECOUNT; i++)
			{
				m_qstrBtnList[i]->setText(qstrLicenseList[i]);
				m_qstrBtnList[i]->setEnabled(true);
			}
			if (m_nCountNextLeft > 0) {
				ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/anotheron.png)");
				ui->pBtnNext->setEnabled(true);
			}
			else 
			{
				ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/anotheroff.png)");
				ui->pBtnNext->setEnabled(false);
			}
		}
		else
		{
			ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/anotheroff.png)");
			ui->pBtnNext->setEnabled(false);
		}
	}
	else
	{
		// 默认60秒自动关闭
		m_pTimer->start(60000);
	}
}

void SelectLicenseDialog::onBtnNextClicked()
{
	m_qstrLicenseSelected = "";
	ui->pBtnConfirm->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/confirmoff.png)");
	ui->pBtnConfirm->setEnabled(false);
	// 获取随机车牌，每次20个，最多5次。
	if (1)
	{
		m_nCountNextLeft--;
		//设置车牌
		QString qstrLicenseList[20] = { "AFASDD", "B45T34", "D3134R", "C98FER", "G34S4F", "H34R34", "HW21W2", "E45T54", "BFD344", "M755FE",
			"N434FG", "S32SG3", "K677FG", "L334EF", "P13333", "Z46774", "W23114", "Q566YY", "R3423R", "Y4545T" };
		for (int i = 0; i < LICENSECOUNT; i++)
		{
			m_qstrBtnList[i]->setText(qstrLicenseList[i]);
			m_qstrBtnList[i]->setStyleSheet("color:rgb(255,255,255);border:2px groove gray; border-radius:10px; padding:2px 2px;background-color: rgb(0, 0, 255); ");
			m_qstrBtnList[i]->setEnabled(true);
		}

		ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/anotheron.png)");
		ui->pBtnNext->setEnabled(true);
	}
	else
	{
		ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/anotheroff.png)");
		ui->pBtnNext->setEnabled(false);
	}
	if (0 == m_nCountNextLeft)
	{
		ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/anotheroff.png)");
		ui->pBtnNext->setEnabled(false);
	}
}

void SelectLicenseDialog::onLicenseSelectedSlot()
{
	QPushButton *pbtnSelected = (QPushButton*)sender();
	m_qstrLicenseSelected = pbtnSelected->text();
	for (int i = 0; i < LICENSECOUNT; i++)
	{
		if (0 == m_qstrBtnList[i]->text().compare(m_qstrLicenseSelected))
		{
			m_qstrBtnList[i]->setStyleSheet("color:rgb(255,255,255);border:2px groove gray; border-radius:10px; padding:2px 2px;background-color: rgb(85, 170, 255);");
		}
		else
		{
			m_qstrBtnList[i]->setStyleSheet("color:rgb(255,255,255);border:2px groove gray; border-radius:10px; padding:2px 2px;background-color: rgb(0, 0, 255); ");
		}
	}
	ui->pBtnConfirm->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/confirmon.png)");
	ui->pBtnConfirm->setEnabled(true);
}
