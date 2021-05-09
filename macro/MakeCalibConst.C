void MakeCalibConst(){

	ofstream fdata;
	fdata.open("calib_const.csv");

	for (int it=0; it<92; it++){

		if ( it<52 ){
			fdata << "0 0 0" << endl;
			continue;
		}

		TFile *infile = new TFile(Form("calibration_%d_out.root",it),"read");

		TH1F *hEdep = (TH1F*)infile->Get("Edep");
		TH1F *hC_Hit = (TH1F*)infile->Get("C_Hit");
		TH1F *hS_Hit = (TH1F*)infile->Get("S_Hit");

		float Edep = hEdep->GetMean()/1000;
		float chit = hC_Hit->GetMean();
		float shit = hS_Hit->GetMean();


		fdata << it << " " << Edep/chit << " " << Edep/shit << endl;

	}



}
