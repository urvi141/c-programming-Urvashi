from rest_framework import serializers


# Create your models here.

class Noticeserializers(serializers.Serializer):
    title = serializers.CharField(max_length=30)
    description = serializers.CharField(max_length=200)

class Eventserializers(serializers.Serializer):
    title = serializers.CharField(max_length=30)
    description = serializers.CharField(max_length=200)
    