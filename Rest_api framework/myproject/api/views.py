from django.shortcuts import render
from .models import *
from .serializers import StudentSerializer
from django.http import HttpResponse
from rest_framework.decorators import api_view
from rest_framework.renderers import JSONRenderer

# Create your views here.


@api_view(['GET'])
def studentall(request):
    sall = Student.objects.all() #complex data - queryset
    serializerData = StudentSerializer(sall,many=True) # convert into python normal datatype
    json_data = JSONRenderer().render(serializerData.data)
    return HttpResponse(json_data,content_type="application/json")

def specificstudent(request,id):
    sdata = Student.objects.get(id=id)
    serializerData = StudentSerializer(sdata)
    json_data = JSONRenderer().render(serializerData.data)
    return HttpResponse(json_data,content_type="application/json")

