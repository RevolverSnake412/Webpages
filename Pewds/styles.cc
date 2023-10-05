@import url('https://fonts.googleapis.com/css2?family=Righteous&display=swap');
@import url('https://fonts.googleapis.com/css2?family=Ubuntu:wght@300&display=swap');

img {
  filter: sepia(50%);
}

body {
  background: url(https://cutewallpaper.org/21/pewdiepie-backgrounds/A-Wallpaper-I-Made-In-Honor-Of-Pewdiepie-Day-Pewdiepie-.png) no-repeat center;
  background-size: cover;
}

a {
  color: black;
  text-decoration: none;
}

a:hover {
  color: white;
}

#background{
  background-color: rgb(255 ,3 ,63);
  display: flex;
  position: fixed; left:0; right:0; top: 0;
  height: 90px;
  margin: -8px;
  border-bottom: 6px solid white;
}

#foreground {
  backdrop-filter: sepia(50%);
  width: 100%;
  display: flex;
  justify-content: space-between;
  
}

#header-img {
  margin: 13px 15px;
  width: 150px;
  height: 150px;
}

#nav-bar {
  display: flex;
  align-items: flex-end;
  justify-content: space-around;
  width: 600px;
}

input{
  border: 2px solid #B93447;
  background-color: black;
  color: white;
}

.fields > #submit {
  background-color: #B93447;
  border: none;
  border: 2px solid #B93447;
}

.fields > button:hover {
  background-color: #8f2131;
}

.nav-link {
  margin: 9px 15px;
  font-family: 'Righteous', cursive;
  font-size: 36px;
  color: #000;
}

label {
  font-family: sans-serif;
  font-size: 19px;
}

#form {
  display: flex;
  background-color: black;
  height: 60px;
  margin: 88px -8px 0;
  justify-content: center;
  border-bottom: 6px solid white;
  color: #B93447;
}

.div-newsletter {
  display: flex;
  align-items: center;
}

#about-us {
  display: flex;
  justify-content: center;
  margin-top: 30px;
}

#title {
  background-color: black;
  border-radius: 10px;
  color: #FFFFF7;
  align-self: flex-start;
  font-family: 'Righteous', cursive;
  font-size: 50px;
  margin-top: 10px;
  margin-left: 10px;
}

.div-video , #features {
  display: flex;
  flex-direction: column;
  align-items: center;
  background-color: #B93447;
  border: 10px solid #000;
  border-radius: 20px;
  box-shadow: 10px 10px 20px;
  margin-left: 10px;
}

iframe {
  border: none;
  border-left: 5px solid black;
  border-right: 5px solid black;
  margin: 10px;
}

#features {
  width: 50%;
  margin: 60px auto 0 auto;
}

.f-div {
  align-self: flex-start;
  margin-left: 30px;
  width: 25vw;
}

.f-div > p:last-of-type {
  padding-bottom: 20px;
}

.f-div h2 {
  margin-bottom: 0;
}

p, h2 {
  font-family: 'Ubuntu', sans-serif;
}

#pricing {
  display: flex;
  justify-content: center;
  margin-top: 70px;
}

.pricing-div {
  text-align: center;
  background-color: #B93447;
  border: 5px solid black;
  border-radius: 5px;
  margin: 0 15px;
  width: 385px;
}

.pricing-div > button {
  background-color: black;
  color: white;
  margin: 15px;
  width: 170px;
  height: 50px;
  border: none;
}

.pricing-div > button:hover {
  background-color: white;
  color: black;
}

li {
  font-decoration: none;
  text-align: center;
}

ul {
  list-style-type: none;
}

button {
  margin: auto;
}
#nav-bar {
  width: 800px;
}
