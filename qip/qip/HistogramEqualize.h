#ifndef HISTOGRAMEEQUALIZE_H
#define HISTOGRAMEEQUALIZE_H

#include "HistogramMatch.h"


class HistogramEqualize :public HistogramMatch
{
	Q_OBJECT
public:
						HistogramEqualize	(QWidget *parent = 0);
	QGroupBox*			controlPanel		();						// create control panel
	void				reset				();						// reset parameters
	void				disable				(bool);
	void				getHistogram		(ImagePtr I, int histogram[]);
	bool				applyFilter(ImagePtr, ImagePtr);// apply filter to input to init output

protected slots:
	void				cumulativeHist		(int);
	void				maxFlatHist		(int);


private:
	// widgets and groupbox
	QGroupBox	*m_ctrlGrp;				// groupbox for panel
	QCheckBox	*m_CheckBoxCummulative;	// auto min check box
	QCheckBox	*m_CheckBoxFlat;		// auto min check box
};

#endif