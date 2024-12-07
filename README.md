# Aganitha - Book Finder

The Book Finder app, built using the Google Books API, allows users to search and explore a vast collection of books with ease. By leveraging the powerful API, the app fetches detailed book information, including titles, authors, descriptions, publication dates, and cover images. Users can search for books by keyword, author, or title, and view results with pagination to navigate through multiple pages of books effortlessly. The app provides a sleek and responsive interface, offering a seamless browsing experience for readers looking to discover new books or dive deeper into their favorite genres.

## Github Link
https://github.com/StellarShivam/Aganitha-Book-Finder

## Deployment Link
https://codesandbox.io/p/github/StellarShivam/Agnitha-frontend/main

## Prerequisites
* Node.js (v16.0.0 or later)

* npm (v8.0.0 or later)

* A modern web browser

## Setup and Installation

Use the package manager npm to install Communication Tracker.

## 1. Clone the Repository

```bash
git clone https://github.com/StellarShivam/Aganitha-Book-Finder
cd Aganitha-Book-Finder
```

## 2. Install Dependencies

```bash
npm install
```
## 3. Run the Application
```bash
# Development Mode
npm start

# Production Build
npm run build
```

## Deployment

**Netlify**

To deploy this project run
```bash
npm run build
```

Then Upload build file to Netlify

**CodeSandbox**
* Pushed the project to GIthub
* Then deployed it on CodeSandbox by connecting it with Github

## Application Functionality

**Key Features**
* **Home Page**
  
     ![alt text](https://i.imghippo.com/files/WC4585Vs.png)

* **Sign Up**
    * Allows users to login and then search and wishlist for their desired books
      
      ![alt text](https://i.imghippo.com/files/PMQ8108cSk.png)

* **Search**
    * Allows user to search for their book and then read if they want with the help of Google Books API
      
      ![alt text](https://i.imghippo.com/files/uTY3510Nw.png)

* **View Details**
    * Allows users to view details of the book like author, publisher etc.
      
   ![alt text](https://i.imghippo.com/files/ssd9427fFY.png)


## Known Limitations
* The Google Books API sometimes provides incomplete or inaccurate book details, such as missing publication dates, incorrect author information, or missing descriptions.
* While the API provides basic information about books , it doesn’t offer access to the full text of the books themselves (unless they are public domain or available for preview). 
* The search functionality provided by the Google Books API is relatively basic. 

## Technology Stack
* React.js
* Node.js
* Express.js
* MongoDB
* React Router
* Context API for state management
* Lucide React for icons
* CSS for styling
* Google Books API

## Future Roadmap
* Allow users to create accounts and save their book collections, preferences, and reading history.
* Based on user reading habits and preferences, offer personalized book recommendations using machine learning algorithms.
* Provide more granular search filters such as genre, year of publication, ratings, language, and more.


## License
This project has been build by Shivam Anand from IIIT Sonepat.

## Contact
SHIVAM ANAND - shivam.anand.216@gmail.com

Deployed Project Link of CodeSandbox : https://codesandbox.io/p/github/StellarShivam/Agnitha-frontend/main?import=true
