{\rtf1\ansi\ansicpg1252\cocoartf2761
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 //SHIVENDRA DWIVEDI\
//23070123122\
#include<iostream>\
using namespace std;\
\
int main()\{\
    float n1, n2, ans;\
    cout<<"Enter values of number 1 & 2: ";\
    cin>>n1>>n2;\
    try\{\
        if(n2==0)\{\
            throw n2;\
        \}\
        else\{\
            ans=n1/n2;\
            cout<<"Answer = "<<ans<<endl;\
        \}\
    \}\
    catch(float num)\{\
        cout <<"\\nERROR: Division by "<<num<<endl;\
    \}\
\}}