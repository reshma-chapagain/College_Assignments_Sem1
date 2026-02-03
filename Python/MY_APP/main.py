from flask import Flask

app = Flask(__name__)

@app.route("/")
def home():
    return  render_template ("home.html")

@app.route('/y')
def about():
    return "<p>COntact pagee</p>"





if __name__ == "__main__":
    app.run(debug=True)