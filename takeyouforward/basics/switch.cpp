double areaSwitchCase(int ch, vector<double> a) {
	switch(ch){
		case 1: 
			return 3.14159265359 * a[0] * a[0];
		case 2: 
			return a[0] * a[1];
		default:
			return 0;
	}
}
