int dataTypes(string type) {
	if(type == "Integrer" || type == "Float"){
		return 4;
	} else if(type == "Long" || type == "Double") {
		return 8;
	} else {
		return 1;
	}
}
