#!/usr/bin/env python
# coding: utf-8

# In[2]:


###  importing dependencies

import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score


# In[3]:


# loading the csv data to a Pandas DataFrame
heart_data = pd.read_csv('data.csv')


# In[4]:


# print first 5 rows of the dataset
heart_data.head()


# In[5]:


# print last 5 rows of the dataset
heart_data.tail()


# In[6]:


# Numbers of rows and columns in the dataset
heart_data.shape


# In[7]:


# Getting some extra information about the dataset
heart_data.info()


# In[8]:


# Checking for missing values
heart_data.isnull()


# In[9]:


# Statistical measure of the data
heart_data.describe()


# In[10]:


# Checking the target variable
heart_data['HeartDisease'].value_counts()


# In[11]:


# Spliting the feature and the target
X = heart_data.drop(columns = 'HeartDisease', axis=1)
Y = heart_data['HeartDisease']


# In[12]:


print(X)


# In[13]:


print(Y)


# In[14]:


# Spliting the into training data and test data
X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=.25, stratify=Y, random_state=2)


# In[15]:


print(X.shape, X_train.shape, X_test.shape)


# In[16]:


# Model training 
# Using Logistic Regression
model = LogisticRegression()


# In[32]:


# Training the logistic regression model with training data
model.fit(X_train.values, Y_train.values)


# In[34]:


# Accuracy on training data
X_train_prediction = model.predict(X_train.values)
training_data_accuracy = accuracy_score(X_train_prediction, Y_train)


# In[35]:


print('Accuracy on Training data:', training_data_accuracy)


# In[37]:


# Accuracy on test data
X_test_prediction = model.predict(X_test.values)
test_data_accuracy = accuracy_score(X_test_prediction, Y_test)


# In[38]:


print('Accuracy on Test data:', test_data_accuracy)


# In[43]:


# Building the predictive system
input_data = (24.39,1,0,0,5.0,3.0,0,1,8,2,0,1,1,8.0,0,0,0);

# Changing the input data to numpy array
input_data_as_numpy_array = np.asarray(input_data)

# Reshape the numpy array as we are predicting for only one instance
input_data_reshaped = input_data_as_numpy_array.reshape(1, -1)

prediction = model.predict(input_data_reshaped)
print(prediction)

if (prediction[0] == 0):
    print("Healthy Person")
else:
    print("The person has heart dieases")



# In[ ]:




