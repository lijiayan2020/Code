function doChange(argument){
	var ele = document.querySelector("input");
	ele.style.color = argument;
	}
function doRange(argument) {
		// body...
	var ele = document.querySelector("input");
	ele.style.width = argument + "px";
	}
function setNewStyle(argument) {
	// body...
	var ele = document.querySelector("input");
	ele.classList.add("newstyle");
}
function deleteStyle(argument) {
	// body...
	var ele = document.querySelector("input");
	ele.classList.remove("newstyle");
	}