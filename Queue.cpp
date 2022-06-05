class Queue {
    private:
    int f,rear,*arr,size;
public:
    Queue() {
        // Implement the Constructor
        size=100001;
        rear=0;
        f= 0;
        arr=new int[size];
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(rear==f){
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear==size){
            return;
        }
            else{
            
            
            arr[rear]=data;
                rear++;
        }
        }

    int dequeue() {
        // Implement the dequeue() function
        if(!isEmpty()){
            int e=arr[f];
            arr[f]=-1;
            f++;
            if(f==rear){
                f=0;rear=0;
            }
            return e;
        }
        else{
            return -1;
        }
    }

    int front() {
        // Implement the front() function
        if(isEmpty()){
            return -1;
        }
        else
            return arr[f];
    }
};
