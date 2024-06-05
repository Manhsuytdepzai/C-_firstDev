#include<iostream>
using namespace std;

class nhan_vien
{
protected:
    string ho_ten;
    int ngay, thang, nam;
public:
    nhan_vien()
        : ho_ten(" "), ngay(0), thang(0), nam(0)
    {}
    nhan_vien(string ho_ten, int ngay, int thang, int nam)
    {
        this->ho_ten = ho_ten;
        this->ngay = ngay;
        this->thang = thang;
        this->nam = nam;
    }
    ~nhan_vien()
    {
    }
    friend istream& operator >> (istream& is, nhan_vien& u)
    {
        is.ignore();
        cout << "nhap ten nhan vien : ";
        getline(is,u.ho_ten);
        cout << "nhap ngay sinh : "<<endl;
        cout << "-->Ngay : "; is>>u.ngay;
        cout << "-->Thang : "; is>>u.thang;
        cout << "-->Nam : "; is>>u.nam;
        return is;
    }
    friend ostream& operator << (ostream& os, nhan_vien u)
    {
        os << "Ten nhan vien : "<< u.ho_ten<<endl;
        os << "-->nam sinh : "<<u.ngay<<" / "<<u.thang<<" / "<<u.nam<<endl;
        return os;
    }
};


class nvsx : public nhan_vien
{
private:
    float luong_cb;
    int so_sp;
public:
    nvsx()
    {
        luong_cb = 1000;
        so_sp =  5;
    }
    nvsx(float _cb)
    {
        this->luong_cb = luong_cb;
        this->so_sp = so_sp;
    }
    ~nvsx()
    {
     
    }
    friend istream& operator >> (istream& is, nvsx& sx)
    {
        is>>(nhan_vien&) sx;
        cout << "==>nhap luong co ban : ";
        is >> sx.luong_cb;
        cout << "==>nhap so san pham : ";
        is >> sx.so_sp;
        return is;
    }
    friend ostream& operator <<(ostream& os, nvsx sx)
    {
        os << (nhan_vien&) sx;
        os << "-->tong luong : "<<(sx.luong_cb + sx.so_sp) * 5000<<endl;
        return os;
    }
    
};
struct Node
{
	nvsx data;
	Node* next;
};

struct LinkedList
{
	Node* head;
	Node* tail;
};

Node* CreateNode(nvsx du_lieu)
{
	Node* node = new Node;
	node->data = du_lieu;
	node->next = NULL; 
	return node;
}

void CreateList(LinkedList& l)
{
	l.head = NULL;
	l.tail = NULL;
}
void AddTail(LinkedList& l, Node* node)
{
	if (l.head == NULL)
	{
		l.head = node;
		l.tail = node;
	}
	else
	{
		l.tail->next = node;
		l.tail = node;
	}
}
class nvvp : public nhan_vien
{
private:
    int ngay_lc;
public:
    nvvp()
    {
        ngay_lc = 10;
    }
    nvvp(float ngay_lc)
    {
        this->ngay_lc = ngay_lc;
    }
    ~nvvp()
    {}
    friend istream& operator >> (istream& is, nvvp& vp)
    {
        is>>(nhan_vien&) vp;
        cout << "==>nhap so ngay lam viec : ";
        is >> vp.ngay_lc;
        return is;
    }
    friend ostream& operator <<(ostream& os, nvvp vp)
    {
        os << (nhan_vien&) vp;
        os << "-->tong luong : "<<vp.ngay_lc * 5000<<endl;
        return os;
    }
    
};
struct Node1
{
	nvvp data;
	Node1* next;
};

struct LinkedList1
{
	Node1* head;
	Node1* tail;
};

Node1* CreateNode1(nvvp du_lieu)
{
	Node1* node1 = new Node1;
	node1->data = du_lieu;
	node1->next = NULL; 
	return node1;
}

void CreateList1(LinkedList1& l)
{
	l.head = NULL;
	l.tail = NULL;
}
void AddTail1(LinkedList1& l, Node1* node)
{
	if (l.head == NULL)
	{
		l.head = node;
		l.tail = node;
	}
	else
	{
		l.tail->next = node;
		l.tail = node;
	}
}

int main()
{
    LinkedList list;
    LinkedList1 list1;
	CreateList(list);
    CreateList1(list1);
	Node* node;
    Node1* node1;
    nhan_vien u;
    nvsx sx;
    nvvp vp;
    int n,p;
    cout<<"Nhap thong tin quan li nhan vien san xuat  "<<endl;
    cout << "nhap so nhan vien san xuat: "; cin >> n;
    for (int i = 0; i < n; i++) {
		cout << "Nhap Thong tin nhan vien thu : " << i + 1 << endl;
		cin >> sx;
		node = CreateNode(sx);
		AddTail(list, node);
	}
    cout<<"*+++++++++++++++++++++++++++++++++++++++++++++++*"<<endl;
    fflush(stdin);
    cout<<"Nhap thong tin quan li nhan vien van phong  "<<endl; 
    cout << "nhap so nhan vien san xuat: "; cin >> p;
    for (int i = 0; i < p; i++) 
    {
		cout << "Nhap Thong tin nhan vien thu : " << i + 1 << endl;
		cin >> vp;
		node1 = CreateNode1(vp);
		AddTail1(list1, node1);
	}
     cout<<"<---=--------Danh sach nhan vien-------------->"<<endl;
    cout<<"*-----------------------------------------------*"<<endl;
	for (Node* k = list.head; k != NULL; k = k->next) {
		cout << k->data;
	}
    cout<<"*-----------------------------------------------*"<<endl;
	for (Node* k = list.head; k != NULL; k = k->next) {
		cout << k->data;
	}
    cout<<"*-----------------------------------------------*"<<endl;
    return 0;

}




