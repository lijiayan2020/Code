window.onload = function(){
	var arra = document.getElementsByClassName("title");
	arra[0].style.backgroundColor = "white";
	arra[0].style.fontWeight = "bold";

	var arrb = document.getElementsByClassName("docFrame");
	arrb[0].style.display = "block";
	for(var i=1; i<arrb.length;i++){
		arrb[i].style.display = "none";
	}
}
function chgStyle(index){
	var arra = document.getElementsByClassName("title");
	for (var i = 0; i < arra.length; i++) {
		arra[i].style.backgroundColor = "#eee";
		arra[i].style.fontWeight = "normal";
	}
	arra[index].style.backgroundColor = "#fff";
	arra[index].style.fontWeight = "bold";

	var arrb = document.getElementsByClassName("docFrame");
	arrb[index].style.display = "block";
	for(var i=0; i<index;i++){
		arrb[i].style.display = "none";
	}
	for(var i=arrb.length-1; i>index;i--){
		arrb[i].style.display = "none";
	}

}