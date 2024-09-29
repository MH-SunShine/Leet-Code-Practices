
    var arr = new Array(7, 2, 8, 1, 3, 4);

    //printing values before sort
    console.log("before sort: ");
    for (var i = 0; i < 6; i++) {
        console.log(arr[i]);
    }

    //bubble sort method
    var temp;
    for ( var i = 0; i < 6; i++) {
        for ( var j = 0; j < 5; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    //printing values after sort
    console.log("after sort: ");
    for (var i = 0; i < 6; i++){
        console.log(arr[i]);
    }