# include<iostream>
using namespace std;
class Ticket{
    public:
    int ticketId;
};
class Reservation{
    public:
    int reservedTicket[25];
    int numReservedtickets;
    Reservation(){
        numReservedtickets=0;
    }
    friend void cancelReservation(Reservation&, int);
};
 void cancelReservation(Reservation& reservation , int ticketId){
   int foundIndex=-1;
   for(int i=0; i<reservation.numReservedtickets; i++){
       if(reservation.reservedTicket[i]==ticketId){
           foundIndex=i;
          break;
       }
       
   }
   if(foundIndex!=-1){
       for(int j=foundIndex; j<reservation.numReservedtickets; j++){
           reservation.reservedTicket[j]= reservation.reservedTicket[j+1];
           
       }
       reservation.numReservedtickets--;
       cout<<"Ticket with ID "<<ticketId<<" has been canceled."<<endl;
   }
   else{
       cout<<"Ticket with ID "<<ticketId<<" not found in the reservation."<<endl;
   }
}

int main(){
    Reservation reservation;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
       cin>>reservation.reservedTicket[i];
       reservation.numReservedtickets++;
    }
    cout<<"Reserved Tickets: ";
    for(int i=0; i<reservation.numReservedtickets ;i++){
      cout<<reservation.reservedTicket[i]<<" ";
    }
    cout<<endl;
    int tickettodelete;
    cin>>tickettodelete;
    cancelReservation(reservation, tickettodelete);
    cout<<"Reserved Tickets: ";
    for(int k=0; k<reservation.numReservedtickets; k++){
        cout<<reservation.reservedTicket[k]<<" ";
    }
    cout<<endl;
    
}