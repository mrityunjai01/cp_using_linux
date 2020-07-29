#!/bin/sh
function run(){
    if [ $1 == "o" ]
    then
	DISPLAY=true
	shift
    else
	DISPLAY=false
    fi
    echo running $1
    if [ $# -ge 3 ]
    then ./$1 < $2 > $3
	 OUTPUT=$3
    elif [ $# -ge 2 ]
    then ./$1 < $1.in > $2
	 OUTPUT=$2
    else 
	./$1 < $1.in > $1.out
	OUTPUT=$1.out
    fi

    if $DISPLAY;
    then cat $OUTPUT
    fi
    
    if [ $? -eq 0 ]
    then echo "Done"
    else echo "Sorry"
    fi
}
function inp(){
    cat > $1.in
    if [ $? -eq 0 ]
    then echo "Done"
    else echo "Sorry"
    fi
}
function om(){
    if [ $# -gt 1 ]
    then
       if [ $2 == "t" ]
       then
	   cat ~/t_template.cpp > $1
       fi
    else cat ~/template.cpp > $1
    fi
    if [ $? -eq 0 ]
    then echo "Done"
    else echo "Okay"
    fi
}
function out(){
    cat $1.out
    if [ $? -eq 0 ]
    then echo "Done"
    else echo "Sorry"
    fi
}
#!/bin/sh
function run(){
    if [ $1 == "o" ]
    then
	DISPLAY=true
	shift
    else
	DISPLAY=false
    fi
    echo running $1
    if [ $# -ge 3 ]
    then ./$1 < $2 > $3
	 OUTPUT=$3
    elif [ $# -ge 2 ]
    then ./$1 < $1.in > $2
	 OUTPUT=$2
    else 
	./$1 < $1.in > $1.out
	OUTPUT=$1.out
    fi

    if $DISPLAY;
    then cat $OUTPUT
    fi
    
    if [ $? -eq 0 ]
    then echo "Done"
    else echo "Sorry"
    fi
}
function inp(){
    cat > $1.in
    if [ $? -eq 0 ]
    then echo "Done"
    else echo "Sorry"
    fi
}
function om(){
    if [ $# -gt 1 ]
    then
       if [ $2 == "t" ]
       then
	   cat ~/t_template.cpp > $1
       fi
    else cat ~/template.cpp > $1
    fi
    if [ $? -eq 0 ]
    then echo "Done"
    else echo "Okay"
    fi
}
function out(){
    cat $1.out
    if [ $? -eq 0 ]
    then echo "Done"
    else echo "Sorry"
    fi
}
