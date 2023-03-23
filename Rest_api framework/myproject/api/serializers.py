from rest_framework import serializers

class StudentSerializer(serializers.Serializer):
    name = serializers.CharField(max_length=30)
    email = serializers.EmailField(max_length=30)
    subject = serializers.CharField(max_length=30)
    city = serializers.CharField(max_length=30)
